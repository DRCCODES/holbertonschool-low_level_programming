#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * free_listint - frees in list_t
  * @head: pointer to first element
  * Return: N/A
  */

void free_listint(listint_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);

}
