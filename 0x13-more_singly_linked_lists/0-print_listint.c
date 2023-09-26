#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  *print_listint - Function that prints all the elements of a listint_t list
  *
  *@h: Pointer to the head of list_t list.
  *
  *Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
