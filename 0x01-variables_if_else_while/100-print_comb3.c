#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry block
 * A program that prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;

		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				if (d != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
