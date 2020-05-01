#include "lists.h"

/**
 * print_dlistint - prt elements of double linked list
 * @h: head of target list
 * Return: size of list
 */


size_t print_dlistint(const dlistint_t *h)
{
int nodes = 0;

if (h == NULL)
	return (0);

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	nodes++;
}
return (nodes);
}
