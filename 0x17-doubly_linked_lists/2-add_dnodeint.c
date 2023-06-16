#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a doubly linked list.
 * @head: pointer to a pointer to the head of the list.
 * @n: value to be stored in the new node.
 *
 * Return: address of the new element on success, or NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	if (head == NULL)
	{
		return (NULL);
	}

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_element;
	}
	*head = new_element;

	return (new_element);
}
