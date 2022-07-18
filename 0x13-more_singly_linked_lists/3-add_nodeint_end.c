#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: the given list
 * @n: the int to be added
 *
 * Return: *listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}
