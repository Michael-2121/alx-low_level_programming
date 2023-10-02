#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: h- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufr;
	ssize_t fd;
	ssize_t h;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufr = malloc(sizeof(char) * letters);
	t = read(fd, bufr, letters);
	h = write(STDOUT_FILENO, bufr, t);

	free(bufr);
	close(fd);
	return (h);
}

