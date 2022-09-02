#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of
 * a list
 *
 * @head: pointer head
 * @n: element value
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
	}
	new_node->next = temp;
	if (h != NULL)
	{
		h->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}

