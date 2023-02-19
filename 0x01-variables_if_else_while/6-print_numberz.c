#include <stdio.h>

/**
 * main - main code
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int numb = 0;

	while (numb < 10)
	{
		putchar(48 + numb);
		numb++;
	}
	putchar('\n');
	return (0);
}
