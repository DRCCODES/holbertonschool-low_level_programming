#include "lists.h"

/**
 *free_dlistint - free doubly linked list
 *@head: head of list to free
 *
 * Return: N/A
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;


	if (!head)
		return;

	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
