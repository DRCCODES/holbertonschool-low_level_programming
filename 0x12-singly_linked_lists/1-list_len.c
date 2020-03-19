#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * list_len - prints the elements of a list
  * @h: pointer that points to first element in list_t
  * Return: element count
  */

size_t list_len(const list_t *h)
{
	unsigned int ln = 0;

	while (h)
	{
	h = h->next;
	ln++;
	}
	return (ln);
}
