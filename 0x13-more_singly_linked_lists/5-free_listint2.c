#include "lists.h"
/**
  *free_listint2 - Function that frees a listint_t list
  *
  *@head: Pointer to the head of the listint_t list.
  *
  *Des: Sets the head to NULL.
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
