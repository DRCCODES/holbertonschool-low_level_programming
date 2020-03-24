#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * insert_nodeint_at_index - insert node at given index
  * @head: head of linked list
  * @idx: index location to add new node
  * @n: value to add for new node
  * Return: return new node addess or NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *new;

	tmp = *head;

	new = malloc(sizeof(listint_t));

	i = 0;
	
	

	while (i != idx + 1)
	{
	if (tmp->next == NULL)
		return (NULL);

	if (i == idx - 1)
	{
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	}
	tmp = tmp->next;

	i++;
	}
	return (new);
}
