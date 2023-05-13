#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of characters to read and print
 *
 * Return: the actual number of characters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t read_count = fread(buffer, sizeof(char), letters, file);

	if (read_count == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	ssize_t write_count = fwrite(buffer, sizeof(char), read_count, stdout);

	if (write_count < read_count)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (write_count);
}
