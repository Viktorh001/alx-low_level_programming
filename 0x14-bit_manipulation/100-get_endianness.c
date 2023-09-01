#include "main.h"

/**
 * get_endianness - confirms if a machine has little or large endian
 * Return: 0 for large, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
