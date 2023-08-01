#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print all elements
 * @h: Pointer
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
