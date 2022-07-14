#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a list
 * @head: the head of the list
 * @str: the str to be added to the new node
 *
 * Return: node pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}

	return (*head);
}
