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
 *delete_dnodeint_at_index - delete node at index
 *@head: head of double linked list
 *@index: index to delete at
 *Return: 1 or -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, len;
	dlistint_t *tmp = *head;

	len = dlistint_lenB(*head);
	if (*head == NULL || index > len)
		return (-1);
	if (index == 0)
	{
		if (tmp->next != NULL)
		{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		}
		else
		{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		}
		return (0);
	}
	for (i = 1; i < index  && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
	}
	else
	{
		tmp = tmp->prev->next = NULL;
		free(tmp);
		tmp = NULL;
	}
	return (1);
}
