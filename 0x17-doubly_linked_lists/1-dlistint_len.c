#include "lists.h"

/**
 * dlistint_len - func returns no of elements
 * a list
 *
 * @h: pointer head
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
