#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	temp = NULL;

	return (n);
}
