#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print all the elements
 * @h: Linked list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
