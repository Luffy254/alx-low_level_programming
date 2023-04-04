#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to a pointer head of a list
 * @n: data to be added to the new node
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = (listint_t *)malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
