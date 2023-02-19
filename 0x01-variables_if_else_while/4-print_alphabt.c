#include <stdio.h>

/**
 * main - main code
 * program that prints the alphabet in lowercase
 * return: 0
 */

int main(void)
{
	char word = 'a';

	while (word <= 'z')
	{
		if (word != 'e' && word != 'q')
			putchar(word);
		word++;
	}

	putchar('\n');
	return (0);
}
