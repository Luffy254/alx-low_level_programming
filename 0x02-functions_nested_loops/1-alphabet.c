#include "main.h"

/**
 * print_alphabet - main entry code
 * prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		_putchar(word);
	}
	_putchar('\n');
}
