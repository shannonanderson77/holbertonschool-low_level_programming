#include "lists.h"

/**
  * get_nodeint_at_index - a function that returns the nth
  * node of a listint_t list
  * @head: pointer to head of list
  * @index: index of node to return
  * Return: index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;

for (count = 0; count <= index; count++)
	{
	head = head->next;
	}

return (head);
}
