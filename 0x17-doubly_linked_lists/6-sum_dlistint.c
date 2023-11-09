#include "lists.h"
/**
  *sum_dlistint - Adds values of linked list
  *
  *@head: head of address to get sum
  *
  *Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temporary;
	int add = 0;

	temporary = head;
	while (temporary != NULL)
	{
		add = add + temporary->n;
		temporary = temporary->next;
	}
	return (add);
}
