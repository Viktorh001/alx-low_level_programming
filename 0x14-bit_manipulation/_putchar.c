#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes down the char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set acurately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
