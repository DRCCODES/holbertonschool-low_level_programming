#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_nodeint - adds node to top of list
  * @head: double pointer to first element
  * @n: int to pass in to list
  *
  * Return: address of the new element or NULL if failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *nline;

nline = malloc(sizeof(listint_t));

if (!nline)
return (0);

nline->n = n;

nline->next = *head;
*head = nline;
return (*head);
}
