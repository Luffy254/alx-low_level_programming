#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index in doubly linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *present, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	present = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(present);
		return (1);
	}

	for (i = 0; i < index && present != NULL; i++)
	{
		present = present->next;
	}
	if (present == NULL)
	{
		return (-1);
	}

	temp = present;
	present->prev->next = present->next;
	if (present->next != NULL)
		present->next->prev = present->prev;
	free(temp);

	return (1);
}
