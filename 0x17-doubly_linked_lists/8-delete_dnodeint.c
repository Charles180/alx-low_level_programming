#include "lists.h"
/**
  *delete_dnodeint_at_index - deletes the node at index of a linked list
  *
  *@head: double pointer to the headnode
  *
  *@index: position of the node to be deleted
  *
  *Return: 1 if success , -1 if failure
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current && x < index)
	{
		current = current->next;
		x++;
	}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
