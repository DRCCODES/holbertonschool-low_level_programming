#include "lists.h"

/**
  * insert_dnodeint_at_index - insert node at given index
  * @h: head of linked list
  * @idx: index location to add new node
  * @n: value to add for new node
  * Return: return new node addess or NULL
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp;
	dlistint_t *new;

	if (h == NULL)
		return (NULL);

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	i = 0;

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}


	while (i < idx - 1)
	{
	if (tmp == NULL)
		return (NULL);

	tmp = tmp->next;
	i++;
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
