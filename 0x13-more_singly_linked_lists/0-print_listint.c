#include "lists.h"
/**
 * print_listint - func prints all the elements in a linked list
 * @h: give singly linked list
 *
 * Return: number of elements (size_t)
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);

}
