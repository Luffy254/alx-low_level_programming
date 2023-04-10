#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or
 * 0 if one or more char in b is not 0 or 1 and b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_numb = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bin_numb = bin_numb << 1;
		if (b[i] == '1')
			bin_numb = bin_numb + 1;
	}
	return (bin_numb);
}
