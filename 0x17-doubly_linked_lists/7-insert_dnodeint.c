#include "lists.h"
/**
  *insert_dnodeint_at_index - inserts a new node at a given position
  *
  *@h: Double pointer to the head node
  *
  *@idx: index of the list where the new node is be added
  *
  *@n: New Node's data
  *
  *Return: The address of the new node at index idx, else NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int x = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp && x < idx - 1)
	{
		temp = temp->next;
		x++;
	}
	if (!temp)
		return (NULL);
	if (!temp->next)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
