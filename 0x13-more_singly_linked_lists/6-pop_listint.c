#include "lists.h"
/**
 * pop_listint - pop the top node
 * @head: given list
 *
 * Return: Int
 */
int pop_listint(listint_t **head)
{
	int top_node;
	listint_t *current, *temp;

	if (*head == NULL)
		return (0);

	current = *head;
	top_node = head->n;

	temp = current->next;
	free(current);

	*head = temp;
	return (top_node);
}
