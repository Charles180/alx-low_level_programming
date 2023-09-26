#include "lists.h"
/**
  *sum_listint - Returns sum of all data (n) in listint_t list.
  *
  *@head: A pointer to the head of the listint_t list.
  *
  *Return: Sum else 0 if empty.
  *
  */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
