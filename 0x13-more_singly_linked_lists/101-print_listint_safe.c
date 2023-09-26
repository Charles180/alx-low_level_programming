#include "lists.h"
/**
  *find_listint_loop_pl - Function that find loop in listint_t linked list
  *
  *@head: pointer to the head of listint_t
  *
  *Return: number of nodes in the list
  */
listint_t *find_listint_loop_pl(listint_t *head)
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

/**
  *print_listint_safe - function that prints a linked list even at a loop
  *
  *@head: pointer to head of list
  *
  *Return: number of nodes printed
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	int loop = 1;
	listint_t *loopnode;

	loopnode = find_listint_loop_pl((listint_t *) head);
	while ((head != loopnode || loop) && head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
		length++;
	}
	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (length);
}
