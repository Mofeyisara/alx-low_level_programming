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
	char *i;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb = size);

	if (i == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		i[a] = 0;

	return (i);
}
