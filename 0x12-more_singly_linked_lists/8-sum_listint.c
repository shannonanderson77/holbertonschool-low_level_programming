#include "lists.h"

/**
  * sum_listint - a function that returns the sum of all data(n)
  * of a listint_t linked list
  * @head: a pointer to the head of the list
  * Return: sum of the data
  */
int sum_listint(listint_t *head)
{
int data;

data = 0;
if (head->next == NULL)
	return (0);
while (head->next != NULL)
{
	head = head->next;
	data += head->n;
}
return (data);
}
