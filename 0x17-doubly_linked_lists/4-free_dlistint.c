#include "lists.h"
/**
  *free_dlistint - frees a dlinked list
  *
  *@head: pointer to the headnode
  *
  *Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
