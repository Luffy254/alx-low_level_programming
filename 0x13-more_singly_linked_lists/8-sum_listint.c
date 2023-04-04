#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to the head of a list
 *
 * Return: sum of all the data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
