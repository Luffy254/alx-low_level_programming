#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int and_mask = 1;
	int i = 0;

	while ((n >> i) > 0)
		i++;
	i--;

	for (; i >= 0; i--)
	{
		if ((n >> i) & and_mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
