#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * find_listint_loop - find loop in loop
  * @head: start of linked list
  * Return: Loop Location or NULL
  */



listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head;
	listint_t *r = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (s && r->next && r->next->next)
	{
		if ((t == r->next) || (t == r->next->next))
		{
			return (t);
		}
		t = t->next;
		r = r->next->next;
	}
	return (NULL);
}
