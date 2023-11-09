#include "lists.h"
/**
  *add_dnodeint_end - adds node at end
  *
  *@head: head address of linked list
  *
  *@n: number of new value
  *
  *Return: New node's address
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temporary, *new_node;

	temporary = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if ((*head) == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temporary->next)
	{
		temporary = temporary->next;
	}
	new_node->prev = temporary;
	temporary->next = new_node;
	return (new_node);
}
