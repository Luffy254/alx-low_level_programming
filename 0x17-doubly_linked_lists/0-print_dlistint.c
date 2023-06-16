#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_t list.
 * @h: Pointer to the head node of the doubly linked list.
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}
