#include "main.h"

/**
 * append_text_to_file - function
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 * Description: appends text at the end of a file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_ = open(filename, O_WRONLY | O_APPEND);

	if (file_ == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(file_, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_);

	return (1);
}
