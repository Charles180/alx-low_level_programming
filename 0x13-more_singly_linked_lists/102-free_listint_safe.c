#include "lists.h"
/**
  *free_listint_safe - Frees a listint_t
  *
  *@h: Pointer to head of list
  *
  *Return: the size of the list
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *original;
	size_t i;
	int rem;

	original = *h;
	for (i = 0; original; i++)
	{
		rem = original - original->next;
		if (rem > 0)
		{
			tmp = original->next;
			free(original);
			original = tmp;
		}
		else
		{
			free(original);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (i);
}
