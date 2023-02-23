#include "main.h"

/**
 * _isalpha - main entry code
 * @c: the character to be checked
 * a function that checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
