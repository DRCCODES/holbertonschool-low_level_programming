#include "lists.h"

/**
 * add_dnodeint - gets len of double linked list
 * @head: pointer to head
 * @n: the data to add
 *
 * Return: head or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;


	if (head == NULL)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		(*head)->prev = tmp;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
