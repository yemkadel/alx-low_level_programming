#include "lists.h"
/**
 * get_nodeint_at_index - gets the node at n index
 * @head: given list
 * @index: given index
 *
 * Return: pointer to listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
