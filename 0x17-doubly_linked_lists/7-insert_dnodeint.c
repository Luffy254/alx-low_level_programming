#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the doubly linked list.
 * @idx: index where the new node should be added.
 * @n: value to store in the new node.
 *
 * Return: address of the new node or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element, *current_element = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current_element != NULL && i < idx - 1)
	{
		current_element = current_element->next;
		i++;
	}

	if (current_element == NULL || current_element->next == NULL)
	{
		if (current_element != NULL && current_element->next == NULL)
		{
			if (i == idx - 1)
				return (add_dnodeint_end(h, n));
		}
		return (NULL);
	}

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->prev = current_element;
	new_node->element = current_node->element;
	current_element->next->prev = new_element;
	current_element->next = new_element;

	return (new_element);
}
