#include "lists.h"

/**
  * listint_len - a function that returns the number of elements in a
  * linked listint_t list
  * @h: a list
  * Return: number of elements in list
  */
size_t listint_len(const listint_t *h)
{
int i;

i = 0;
while (h != NULL)
{
h = h->next;
i++;
} return (i);
}
