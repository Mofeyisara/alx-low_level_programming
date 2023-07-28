#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocate memory
 * @b: Number of bytes
 * Return: Pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
