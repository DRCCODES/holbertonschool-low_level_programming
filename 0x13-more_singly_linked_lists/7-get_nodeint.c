#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * get_nodeint_at_index - get value of index
  * @head: head of struct
  * @index: location of wanted node
  * Return: NULL or Value At Index
  */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i;
	listint_t *tmp;

	tmp = head;
	i = 0;
	while (i < index)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}

	return (tmp);

}
