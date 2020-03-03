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
int j;


if (width < 1 || height < 1)
{
return (NULL);
}

arr = malloc(sizeof(int *) * width);

for (i = 0; i < width; i++)
{
arr[i] = malloc(sizeof(int) * height);
	if (arr[i] == NULL)
	{
		for (j = 0; j <= i; j++)
			free(arr[j]);
		free(arr);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}
}
return (arr);
}
