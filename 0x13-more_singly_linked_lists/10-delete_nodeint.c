#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at index
  * @head: Head of teh node
  * @index: index to delete node
  * Return: 1 or -1 if fails
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	next = tmp->next->next;

	free(tmp->next);

	tmp->next = next;

	return (1);
}
