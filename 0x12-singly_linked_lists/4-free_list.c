#include "lists.h"

/**
 * free_list - free give list
 * @head: the head of a list.
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
