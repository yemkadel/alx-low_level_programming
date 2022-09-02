#include "lists.h"
/**
 * free_dlistint - func frees a list
 * @head: head pointer
 * Return: nil
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

