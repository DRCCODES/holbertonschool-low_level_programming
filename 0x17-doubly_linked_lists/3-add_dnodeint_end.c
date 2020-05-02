#include "lists.h"


/**
 *add_dnodeint_end - add node at end of double linked list
 *@head: the start of double linked list
 *@n: int to add into doble linked list
 *Return: NUL or address of head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	tmp = *head;

	if (head == NULL)
		return (NULL);

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	nnode->prev = NULL;
	if (*head == NULL)
		*head = nnode;
	else
	{
		while (tmp->next)
		{
			tmp = temp->next;
		}
		temp->next = nnode;
		newnode->prev = tmp;
	}
	return (nnode);
}
