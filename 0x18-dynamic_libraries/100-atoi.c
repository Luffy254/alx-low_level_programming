#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (!started)
			{
				started = 1;
			}
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
