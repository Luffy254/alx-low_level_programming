#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size and initializes it to char c
 * @size: size of the array
 * @c: char initialized
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
