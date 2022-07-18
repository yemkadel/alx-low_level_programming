#include "lists.h"
/**
 * listint_len - func prints all the elements in a linked list
 * @h: give singly linked list
 *
 * Return: number of elements (size_t)
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);

}
