#include "lists.h"

/**
 * dlistint_lenB - gets len of double linked list
 * @h: pointer to head
 *
 *
 * Return: returns size of list
 */

size_t dlistint_lenB(const dlistint_t *h)
{
int nodes = 0;

if (h == NULL)
{
	return (0);
}

while (h != NULL)
	{
	h = h->next;
	nodes++;
	}
return (nodes);
}

/**
  * insert_dnodeint_at_index - insert node at given index
  * @h: head of linked list
  * @idx: index location to add new node
  * @n: value to add for new node
  * Return: return new node addess or NULL
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len;
	dlistint_t *tmp = *h;
	dlistint_t *new;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_lenB(*h);

	if (idx > len)
		return (NULL);

	if (idx == len)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	while (i != idx)
	{
	tmp = tmp->next;
	i++;
	}
	tmp->prev->next = new;
	new->prev = tmp->prev;
	tmp->prev = new;
	new->next = tmp;
	return (new);
}
