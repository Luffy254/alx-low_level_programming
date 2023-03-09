#include "main.h"
int helper(int n, int i);

/**
 * _sqrt_recursion - returns squareroot of a number
 * @n: number to return squareroot
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helper(n, 0));
	}
}

/**
 * helper - recurses to find the natural squareroot
 * @n: number to return squareroot
 * @i: iterator
 *
 * Return: the squareroot
 */
int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (helper(n, i + 1));
	}
}
