#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2D grid, aka house elf, prev created by alloc_grid
* @grid: Dobby the house elf
* @height: Prof Snape
* $mrklnd
* Return: 0
*/
void free_grid(int **grid, int height)
{
	int sock;

	for (sock = 0; sock < height; sock++)
	{
		free(grid[sock]);
	}
	free(grid); /**frees dobby :')*/
}
