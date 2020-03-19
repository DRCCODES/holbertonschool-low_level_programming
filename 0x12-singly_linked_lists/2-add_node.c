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

int _strlen(char *s)
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
  * add_node - adds node to top of list
  * @head: double pointer to first element
  * @str: str to be duplicated
  *
  * Return: address of the new element or NULL if failed
  */

list_t *add_node(list_t **head, const char *str)
{
unsigned int listnum = 0;

	list_t *nline;

	nline = malloc(sizeof(list_t));

	if (!nline)
		return (0);

	nline->str = strdup(str);
	nline->len = strlen(str);
	nline->next = *head;
	*head = nline;
	return (*head);
}
