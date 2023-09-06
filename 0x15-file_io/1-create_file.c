#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointr to the name of the file to be created
 * @text_content: A pointr to a str to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int sd, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	sd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	u = write(fd, text_content, len);

	if (sd == -1 || u == -1)
		return (-1);

	close(sd);

	return (1);
}
