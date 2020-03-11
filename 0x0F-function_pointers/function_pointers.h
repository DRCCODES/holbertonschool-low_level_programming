#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, unsigned int size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif

