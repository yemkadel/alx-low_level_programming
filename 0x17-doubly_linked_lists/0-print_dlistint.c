#include "lists.h"
/**
 * print_dlistint - methods prints all elements
 * @h: head
 *
 * Description: double
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
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

	while (h != NULL)
	{
		print("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
