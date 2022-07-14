#include "lists.h"
/**
 * add_node - adds a new node to the head
 * @head: the head to a list
 * @str: the string to added
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (len = 0; str[len]; len++)
		;
	node->len = len;
	node->next = *head;
	*head = node;
	return (*head);
}
