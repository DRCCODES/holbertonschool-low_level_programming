#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * free_list - frees in list_t
  * @head: pointer to first element
  * Return: N/A
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}

}
