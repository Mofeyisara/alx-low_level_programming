#include <stdlib.h>
#include "main.h"
/**
 * *array_range - Create an array
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the new array
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++, min++)
		a[b] = min;

	return (a);
}
