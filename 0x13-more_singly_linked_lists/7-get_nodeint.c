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
	listint_t *temp = head;

	do {
		temp = temp->next;
		node_counter++;
	} while (temp && (node_counter < index));
	if (node_counter < index)
		return (NULL);
	return (temp);
}
