#include "lists.h"
/**
  *delete_nodeint_at_index - Deletes the node at index of a listint_t list.
  *
  *@head: Pointer to the head of the listint_t list.
  *
  *@index: The index of the node that should be deleted.
  *
  *Return: 1 if successful else -1.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int node;

	node = 0;
	if (cp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}
	while (node < (index - 1))
	{
		if (cp->next == NULL)
			return (-1);
		cp = cp->next;
		node++;
	}
	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}
