#include "lists.h"
/**
  *get_nodeint_at_index - Function that finds the nth node in listint_t list
  *
  *@head: Pointer head of the listint_t linked list
  *
  *@index: Index of the node.
  *
  *Return: The nth node else NULL
  *
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_counter = 0;

	do {
		if (head == NULL)
			return (NULL);
		head = head->next;
		node_counter++;
	} while (node_counter < index);
	return (head);
}
