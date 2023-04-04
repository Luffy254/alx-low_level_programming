#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to a pointer to the head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_ptr;

	while (*head != NULL)
	{
		temp_ptr = *head;
		*head = (*head)->next;
		free(temp_ptr);
	}

	*head = NULL;
}
