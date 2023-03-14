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

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
