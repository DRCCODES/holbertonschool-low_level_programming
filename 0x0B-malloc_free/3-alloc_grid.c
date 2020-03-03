#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - make a 2d array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: the array.
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i;

arr = malloc(sizeof(int *) * width);
if (width == 0 || height == 0)
{
return (NULL);
}

for (i = 0; i < width; i++)
{
arr[i] = malloc(sizeof(int) * height);
}
for (i = 0; i < width; i++)
	for (j = 0; j < height; j++)
		arr[i][j] = 0;

return (arr);
}
