#include "lists.h"

/**
  * get_dnodeint_at_index - get value of index
  * @head: head of struct
  * @index: location of wanted node
  * Return: NULL or Value At Index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *tmp;

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
