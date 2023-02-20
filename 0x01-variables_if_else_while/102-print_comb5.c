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
	int f_d;
	int l_d;
	int j;
	int f_d2;
	int l_d2;

	while (i <= 98)
	{
		f_d = (i / 10 + '0');
		l_d = (i % 10 + '0');
		j = 0;
		while (j <= 99)
		{
			f_d2 = (j / 10 + '0');
			l_d2 = (j / 10 + '0');
			if (i < j)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);
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
