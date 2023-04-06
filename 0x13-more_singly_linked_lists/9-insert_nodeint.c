#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to a pointer to the head of the node
 * @idx: index position for the new node
 * @n: data of new node
 *
 * Return: address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_ptr, *prev_ptr, *curr_ptr;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	new_ptr = (listint_t *)malloc(sizeof(listint_t));
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	new_ptr->n = n;
	new_ptr->next = NULL;

	if (idx == 0)
	{
		new_ptr->next = *head;
		*head = new_ptr;
		return (new_ptr);
	}

	prev_ptr = NULL;
	curr_ptr = *head;
	for (i = 0; i < idx; i++)
	{
		if (curr_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
		prev_ptr = curr_ptr;
		curr_ptr = curr_ptr->next;
	}

	prev_ptr->next = new_ptr;
	new_ptr->next = curr_ptr;

	return (curr_ptr);
}
