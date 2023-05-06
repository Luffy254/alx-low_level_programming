#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int extr_numb = 1;
	int len_n = 0;
	int count = 0;

	while ((n >> len_n) > 0)
		len_n++;

	len_n--;

	while (len_n >= 0)
	{
		if ((n >> len_n) & extr_numb)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
		{
			_putchar('0');
		}

		len_n--;
	}

	if (count == 0)
		_putchar('0');
}
