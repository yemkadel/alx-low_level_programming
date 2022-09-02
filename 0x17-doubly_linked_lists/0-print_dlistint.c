#include "lists.h"
/**
 * print_distint - methods prints all elements in a
 * @h: head
 * 
 * Description:
 * Return: returns the number of nodes
 */

size_t print_distint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while(h != NULL)
	{
		print("%i\n", h->n);
		i++;
		h = h->next;
	}
}
