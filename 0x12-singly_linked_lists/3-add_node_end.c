#include "lists.h"
/**
  *add_node_end - Function that adds the new node.
  *
  *@head: Pointer the head of the list_t list.
  *
  *@string: The string added
  *
  *Return: NULL If the function fails else address of new element.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = duplicate;
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
