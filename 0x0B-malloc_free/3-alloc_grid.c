#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: Width input
 * @height: Height input
 * Return: pointer to 2 dimentional array of pointer
 */
int **alloc_grid(int width, int height)
{
	int **wee;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	wee = malloc(sizeof(int *) * height);

	if (wee == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		wee[c] = malloc(sizeof(int) * width);

		if (wee[c] == NULL)
		{
			for (; c >= 0; c--)
				free(wee[c]);

			free(wee);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			wee[c][d] = 0;
	}

	return (wee);
}
