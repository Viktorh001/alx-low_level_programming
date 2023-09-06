#include "main.h"

/**
 * append_text_to_file - Appends a text file at the end of the file.
 * @filename: One pointr to the name of the file.
 * @text_content: The str to add at the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	u = write(o, text_content, len);

	if (o == -1 || u == -1)
		return (-1);

	close(o);

	return (1);
}
