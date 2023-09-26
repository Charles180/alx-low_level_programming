#include "lists.h"
#include <stdio.h>
/**
  *listint_len - Function to return number of elements in listint_t
  *
  *@h: Pointer to the head of the listint_t list.
  *
  *Return: The number of elements.
  */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
