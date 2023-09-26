#include "lists.h"
/**
  *add_nodeint - Adds new node at the beginning of listint_t list.
  *
  *@head: A pointer to head of the listint_t list.
  *
  *@n: New node integer
  *
  *Return: Address of new element else NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
