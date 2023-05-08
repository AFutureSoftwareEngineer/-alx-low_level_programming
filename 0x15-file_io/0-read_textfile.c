#include "main.h"

/**
 * read_textfile - function
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 * Description: reads a text file and prints the letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of;
	ssize_t nrd, nlp;
	char *buf;

	if (!filename)
		return (0);

	of = open(filename, O_RDONLY);

	if (of == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(of, buf, letters);
	nlp = write(STDOUT_FILENO, buf, nrd);

	close(of);

	free(buf);

	return (nlp);
}
