#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * free_listint2 - frees in list_t
  * @head: pointer to first element
  * Return: N/A
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;


	if (!head)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
