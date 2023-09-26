#include "lists.h"
/**
  *find_listint_loop - finds a loop in the listint_t
  *
  *@head: Pointer to the head of the listint_t
  *
  *Return: address of node else NULL
  *
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *tail;

	if (head == NULL)
		return (NULL);
	for (tail = head->next; tail != NULL; tail = tail->next)
	{
		if (tail == tail->next)
			return (tail);
		for (p = head; p != tail; p = p->next)
			if (p == tail->next)
				return (tail->next);
	}
	return (NULL);
}
