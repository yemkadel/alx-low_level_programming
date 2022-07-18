#include "lists.h"
/**
 * add_nodeint - adds a int value to the list
 * @head: a pointer to a linked list
 * @n: an int value
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
