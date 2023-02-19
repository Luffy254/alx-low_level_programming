#include <stdio.h>

/**
 * main - main code
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
