#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - return lenght of str.
 * @s: str to be measured
 *
 * Return: lengths of string
 *
 */

int _strlen(const char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen(s + 1));
	}
	else
	{
return (0);
	}
}

/**
  * add_node_end - adds node to end of list
  * @head: double pointer to first element
  * @str: str to be duplicated
  *
  * Return: newNode or NULL if failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(list_t));

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
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
	return (newNode);
}
