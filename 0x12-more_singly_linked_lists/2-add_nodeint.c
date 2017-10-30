#include "lists.h"

/**
  * add_nodeint - a function that adds a new node at the beginning of
  * a listint_t list
  * @head: pointer to the head of the list
  * @n: the length of the list
  * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node; /*declare a new_node*/

new_node = (listint_t *)malloc(sizeof(listint_t)); /*some memory for new_node*/
new_node->n = n; /*write contents into new_node*/

new_node->next = (*head); /*move to the next element*/
(*head) = new_node; /*make the new_node the new head*/

return (*head); /*return pointer to the new_node*/
}
