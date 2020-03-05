#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid -  Entry point
 *@grid: pointer
 *@height: int
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
