#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
