#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;

	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (i < j && i != j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
