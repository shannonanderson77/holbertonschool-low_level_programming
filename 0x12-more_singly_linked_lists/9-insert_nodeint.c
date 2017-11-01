#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts a new node
  * at a given position
  * @head: pointer to start of list
  * @idx: index of the list where the new node should be added
  * @n: data to write into new node
  * Return: the address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp_node; /*to hold head while inserting*/
listint_t *new_node; /*new node to insert into list*/
unsigned int count; /*to keep track of index a list is traversed*/

new_node = (listint_t *)malloc(sizeof(listint_t)); /*memory for new node*/
if (new_node == NULL)
	return (NULL);
new_node->n = n; /*write data into new node*/
if ((*head) == NULL && idx == 0) /*if the list is empty and index is 0*/
	{
	*head = new_node; /*point head to new node*/
	new_node->next = NULL; /*point new node to NULL*/
	return (new_node);
	}
if ((*head) == NULL)
	return (NULL);
if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
temp_node = *head; /*hold head*/
for (count = 0; count < idx - 1 && temp_node != NULL; count++)
/*start counting till index or till temp node hits end of list*/
	{
	temp_node = temp_node->next; /*traverse the list*/
	}
if (temp_node != NULL)
	{
new_node->next = temp_node->next; /*done looping, make head point to new_node*/
	temp_node->next = new_node; /*make new node point to temp_node next*/
	return (new_node);
	}
else
	free(new_node);
return (NULL);
}
