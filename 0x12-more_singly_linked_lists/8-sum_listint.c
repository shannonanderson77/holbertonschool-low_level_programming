#include "lists.h"

/**
  * sum_listint - a function that returns the sum of all data(n)
  * of a listint_t linked list
  * @head: a pointer to the head of the list
  * Return: sum of the data
  */
int sum_listint(listint_t *head)
{
unsigned int data;

data = 0;
if (head == NULL) /*if list is empty*/
	return (0);
while (head != NULL) /*while not at the end of list*/
{
	data += head->n; /*add data values at each node*/
	head = head->next; /*traverse list*/
}
return (data); /*return the sum*/
}
