/**
 * add_dnodeint_end - adds a new node at the end
 *
 * @head: head pointer
 * @n: value
 * Return: address or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_list;

	temp = *head;
	new_list = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new_list);
		return (NULL);
	}
	if (temp == NULL)
	{
		new_list->n = n;
		new_list->prev = NULL;
		new_list->next = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new_list->n = n;
		temp->next = new;
		new_list->prev = temp;
		new_list->next = NULL;
	}
	return (new_list);
}
