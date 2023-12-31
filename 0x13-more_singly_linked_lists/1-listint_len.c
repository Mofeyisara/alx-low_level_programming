#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Return the number of element
 * @h: Pointer
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
