#include "lists.h"
/**
 * sum_dlistint - func returns sum data in
 * a linked list
 * @head: head pointer
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	sum = 0;

	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);

}

