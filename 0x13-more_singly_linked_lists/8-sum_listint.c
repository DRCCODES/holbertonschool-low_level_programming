#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * sum_listint - sums elements in linked list
  * @head: head of list
  *
  * Return: 0 Or Sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
