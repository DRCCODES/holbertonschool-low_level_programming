#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Safely free a linked list
 * @h: pointer to head
 * Return: NULL or bytes freeded
 */

ize_t free_listint_safe(listint_t **h)
{
	if (*h == NULL)
		return (NULL);

	*h = NULL;

	return (0);
}
