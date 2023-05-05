#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: converted number or 0 if
 * one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		decimal = decimal << 1;
		if (*b == '1')
		{
			decimal = decimal | 1;
		}
		b++;
	}
	return (decimal);
}
