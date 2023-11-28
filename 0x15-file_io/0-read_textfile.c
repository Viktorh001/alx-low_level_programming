#include "main.h"
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)

		return (0);

	char *buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	fclose(file);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesRead);
}

int main()
{
	ssize_t result = read_textfile("example.txt", 100);
	if (result == 0)
	{
		fprintf(stderr, "Error reading or printing the file.\n");
	}
	else
	{
		printf("Number of letters read and printed: %zd\n", result);
	}

	return (0);
}

