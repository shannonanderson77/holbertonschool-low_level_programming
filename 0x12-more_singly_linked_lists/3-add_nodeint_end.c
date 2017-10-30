#include "lists.h"

/**
  * add_nodeint_end - a function that adds a node at the end of a
  * listint_t list
  * @head: the head of a list
  * @n: value of elements in list
  * Return: a pointer to new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node; /*new_node at the end of list*/
listint_t *temp_node; /*temp_node to traverse the list*/

new_node = (listint_t *)malloc(sizeof(listint_t)); /*memory for new_node*/
new_node->n = n; /*write contents into new_node*/
new_node->next = NULL; /*cause it's the end of the list*/
temp_node = (*head); /*to hold the address of head*/
if (*head == NULL) /*if list is empty*/
{
	*head = new_node; /*still create a new_node*/
return (*head); /*and return a pointer to it*/
}
while (temp_node->next != NULL) /*while we aren't at the end of the list*/
{

temp_node = temp_node->next; /*traverse the list to the end*/
}
temp_node->next = new_node; /*set the end of the list as my new_node*/
return (*head); /*return pointer to head cause we always start at the head*/
/*with linked lists*/
}
