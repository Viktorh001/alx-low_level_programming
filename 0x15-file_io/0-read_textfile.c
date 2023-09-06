#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Accesses the  file print to STD_out.
 * @filename: files being accessed
 * @letters: num of letters to be accessd
 * Return: w- actual num of bytes accessed and printed
 *        0 when the function fails flnm is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t sd;
	ssize_t u;
	ssize_t t;

	sd = open(filename, O_RDONLY);
	if (sd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(sd, buf, letters);
	u = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(sd);
	return (u);
}
