#include "lists.h"
#include <stdio.h>
/**
  *print_list - Function that prints all the elements of a list_t list.
  *
  *@h: The list_t list.
  *
  *Return: The number of nodes in h.
  */

size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
