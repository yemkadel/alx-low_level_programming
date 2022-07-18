#include "lists.h"
/**
 * free_listint - free the list from mem
 * @head: given list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
