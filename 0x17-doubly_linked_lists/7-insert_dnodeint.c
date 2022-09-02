#include "list"
/**
 * insert_dnodeint_at_index - inserts a node a idx
 *
 * @h: head
 * @idx: index
 * @n: value
 * Return: dlistInt_t *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new_list;
	unsigned int index;

	if (idx != 0)
	{
		index = 1;
		head = *h;
		if (head != NULL)
		{
			while (head->prev != NULL)
				head = head->prev;
		}
		while (head != NULL)
		{
			if (index == idx)
			{
				if (head->next == NULL)
					new_list = add_dnodeint_end(h, n);
				else
				{
					new_list = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new_list->n = n;
						new_list->next = head->next;
						new_list->prev = head;
						head->next->prev = new_list;
						head->next = new_list;
					}
				}
				break;
			}
			head = head->next;
			index++;
		}
	}
	else
		new_node = add_dnodeint(h, n);
	return (new_list);
}

