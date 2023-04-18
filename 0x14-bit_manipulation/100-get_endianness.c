#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	if  (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
