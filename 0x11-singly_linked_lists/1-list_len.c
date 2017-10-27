#include "lists.h"

/**
  * list_len - a function that returns the number of elements
  * in a linked list_t
  * @h: a pointer to a list
  * Return: the number of elements in list
  */
size_t list_len(const list_t *h)
{
int i;

i = 0;
while (h != NULL)
h = h->next;
i++;
return (i);

}
