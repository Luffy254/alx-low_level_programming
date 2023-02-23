#include "main.h"

/**
 * _abs - main entry code
 * @n: the int to check
 * a function that computes the absolute value of an integer
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
