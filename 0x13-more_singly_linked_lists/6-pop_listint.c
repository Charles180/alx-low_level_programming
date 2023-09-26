#include "lists.h"
/**
  *pop_listint - Deletes the head node of a listint_t list.
  *
  *@head: A pointer to head of the listint_t list.
  *
  *Return: The head node's data (n) else 0
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int r;

	if (*head == NULL)
		return (0);
	tmp = *head;
	r = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (r);
}
