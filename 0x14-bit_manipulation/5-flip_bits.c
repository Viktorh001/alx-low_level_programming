#include "main.h"

/**
 * flip_bits - counts the digits of bits to convert
 * to get from one digits to another
 * @n: first digit
 * @m: second digit
 *
 * Return: digits of bits to be converted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
