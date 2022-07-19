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
	unsigned int i;
	
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
