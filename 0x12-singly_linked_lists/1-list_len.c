#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Return the number of elements
 * @h: Pointer
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
