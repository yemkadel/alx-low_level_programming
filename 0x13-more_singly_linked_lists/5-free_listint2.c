#include "lists.h"
/**
 * free_listint2 - free a list from mem
 * @head: the given list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
