#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * reverse_listint - reverses linked list
  * @head: head of list
  * Return: start of reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
