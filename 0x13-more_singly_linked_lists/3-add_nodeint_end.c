#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_nodeint_end - adds node to end of list
  * @head: double pointer to first element
  * @n: int to pass into list
  *
  * Return: newNode or NULL if failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
	return (NULL);
	}

	if (!*head)
	{
	*head = newNode;
	}
	temp = *head;
	while (temp->next)
	{
	temp = temp->next;
	}
	temp->next = newNode;
	newNode->n = n;

	newNode->next = NULL;
	return (newNode);
}
