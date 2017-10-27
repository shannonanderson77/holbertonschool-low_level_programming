#include "lists.h"

/**
  * _strlen - a function that calculates the length of a string
  * @str: takes a constant length string
  *
  * Return: the length of the string
  */
int _strlen(const char *str)
{
int i;
int count;

for (i = 0; str[i] != '\0'; i++)
{
count++;
}
return (count);
}

/**
  * add_node - a function that adds a new node
  * at the beginning of a list_t list
  * @str: a list of strings
  * @head: head of the list
  * Return: the address of the new node, or NULL
  * if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

	new_node = malloc(sizeof(list_t));
new_node->next = *head;
*head = new_node;
new_node->str = strdup(str);
if (str == NULL)
	free(new_node);
new_node->len = _strlen(str);
return (new_node);
}
