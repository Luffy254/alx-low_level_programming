#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
