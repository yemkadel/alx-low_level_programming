#include "lists.h"
/**
 * print_list - the func prints elements of a given list
 * @h: list of type list_t
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count += 1;
	}
	return (count);
}
