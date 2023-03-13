#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
