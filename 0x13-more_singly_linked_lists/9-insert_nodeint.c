#include "lists.h"
/**
  *insert_nodeint_at_index - Inserts a node at a given pos
  *
  *@head: Pointer to head of the listint_t list.
  *
  *@idx: The index where the node should be added.
  *
  *@n: New node int
  *
  *Return: Adress of new node else NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cp = *head;
	unsigned int node;

	node = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}
	while (node < (idx - 1))
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);
		cp = cp->next;
		node++;
	}
	new->next = cp->next;
	cp->next = new;
	return (new);
}
