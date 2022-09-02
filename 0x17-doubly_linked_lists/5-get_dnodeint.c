#include "lists.h"
/**
 * get_dnodeint_at_index - func returns the nth
 * node of a linked list
 * @index: index
 * @head: head pointer
 * Return: dlistint *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

	return (head);
}

