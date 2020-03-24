#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * print_listint - prints the elements of a list
  * @h: pointer that points to first element in list_t
  * Return: node count
  */
size_t print_listint(const listint_t *h)
{
const listint_t  *current_node = h;
int len = 0;

while (current_node != NULL)
{
printf("%d\n", current_node->n);
current_node = current_node->next;
len++;
}
return (len);
}
