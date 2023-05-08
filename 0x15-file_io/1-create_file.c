#include "main.h"

/**
 * create_file - function
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 * Description: creates a file
 */
int create_file(const char *filename, char *text_content)
{
	int file_;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_ = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_ == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_);

	return (1);
}
