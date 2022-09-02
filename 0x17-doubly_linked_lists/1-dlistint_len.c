#include "lists.h"

/**
 * dlistint_len - func returns no of elements
 * in linked list
 * @h: a head pointer
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;
	const dlistint *temp;

	temp = h;
	num = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		num++;
	}

	return (num);
}
