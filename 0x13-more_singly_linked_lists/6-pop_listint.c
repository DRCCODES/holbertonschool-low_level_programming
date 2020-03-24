#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * pop_listint - deletes head and returns value
  * @head: the head of linked list
  * Return: head value
  */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int box;

	if (*head == NULL)
	return (0);
	del = *head;
	
	box = del->n;
	*head = del->next;
	free(del);	
	return (box);
}
