#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Size
 * Return: Pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	i = malloc(b);

	if (i == NULL)
		return (NULL);

	while (a < b)
	{
		i[a] = 0;
		a++;
	}

	return (i);
}
