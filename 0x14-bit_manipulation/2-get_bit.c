#include "main.h"

/**
 * get_bit -function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index starting from 0 of the bit
 *
 * Return: bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_numb;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit_numb = (n >> index) &  1;

	return (bit_numb);
}
