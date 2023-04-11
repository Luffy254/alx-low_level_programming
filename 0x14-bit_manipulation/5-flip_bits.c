#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first operand
 * @m: second operand
 *
 * Return: numbers of bits needs to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_operation = n ^ m;

	unsigned int count = 0;

	while (xor_operation > 0)
	{
		count += xor_operation & 1;
		xor_operation >>= 1;
	}
	return (count);
}
