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
	list_t *new_node, *temp;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	new_node->len = len;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
