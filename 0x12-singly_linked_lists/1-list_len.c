#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elemnts in linked list_t
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
