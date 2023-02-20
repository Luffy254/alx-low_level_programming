#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry code
 * a program that prints all possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
