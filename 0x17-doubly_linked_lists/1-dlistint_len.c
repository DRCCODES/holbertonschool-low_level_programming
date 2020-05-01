#include "lists.h"

/**
 * dlistint_len - gets len of double linked list
 * @h: pointer to head
 *
 *
 * Return: returns size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
int nodes = 0;

if (h == NULL)
{
	return (0);
}

while (h != NULL)
	{
	nodes++;
	h = h->next;
	}
return (nodes);
}
