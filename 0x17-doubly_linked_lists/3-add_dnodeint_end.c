/**
 * add_dnodeint_end - This function add a new node at the ende
 * of a dlistint_t list
 * Author - Thaoban Abdrasheed
 * @head: The head pointer
 * @n: The value of the node
 * Return: address of the new element or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (temp == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		new_node->n = n;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}

	return (new_node);
}
