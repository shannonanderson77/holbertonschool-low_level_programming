#include "lists.h"

/**
  * pop_listint - a function that deletes the head node of a
  * listint_t list
  * @head: pointer to head of list
  * Return: the head nodes data, 0 if list is empty
  */
int pop_listint(listint_t **head)
{
listint_t *temp_node;
int data;

temp_node = *head;
	if ((*head) == NULL)
	{
		return (0);
	}
	{
		*head = temp_node->next;
		data = temp_node->n;
		free(temp_node);
	}
return (data);
}
