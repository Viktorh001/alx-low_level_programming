#include "main.h:
#include <unistd.h>
/**
* _putchar - writes the characters of c to stdout
* @c: The characters to point
*
* Return: success 1.
* On error, -1 is returned, and error is set well
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

