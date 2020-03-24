#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * listint_len - prints the elements of a list
  * @h: pointer that points to first element in list_t
  * Return: element count
  */

size_t listint_len(const listint_t *h)
{
	const listint_t  *current_node = h;
	int len = 0;

	while (current_node != NULL)
	{
	current_node = current_node->next;
	len++;
	}
	return (len);
}
