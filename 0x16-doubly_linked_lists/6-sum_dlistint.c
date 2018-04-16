#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the
 * data (n) of a dlistint_t linked list
 * @head: pointer to the head of a doubly linked list
 * Return: sum of the list data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
