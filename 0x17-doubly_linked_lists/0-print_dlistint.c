#include "lists.h"

/**
 * print_dlistint - func print elements of
 * a list
 * @h: pointer head
 *
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t num;

	num = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		num++;
		temp = temp->next;
	}

	return (num);
}
