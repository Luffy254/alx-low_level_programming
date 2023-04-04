#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head;
		head = head->next;
		free(temp_ptr);
	}
}
