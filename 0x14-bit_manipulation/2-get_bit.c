#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to with the bit
 * @index: index of bit from 0
 *
 * Return: value of bit index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
