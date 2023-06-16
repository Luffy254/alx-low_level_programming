#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to retrieve.
 *
 * Return: if node exists, return a pointer to the node.
 *         if not, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present = head;
	unsigned int numb = 0;

	while (present != NULL)
	{
		if (numb == index)
			return (present);

		present = present->next;
		numb++;
	}
	return (NULL);
}
