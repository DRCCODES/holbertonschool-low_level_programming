#include "lists.h"
#include <stdio.h>
#include <stdlib.h>



/**
  * print_list - prints the elements of a list
  * @h: pointer that points to first element in list_t
  * Return: node count
  */

size_t print_list(const list_t *h)
{
unsigned int ln = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
ln++;
}
return (ln);
}
