#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count number of unique nodes
 * @head: Pointer
 * Return: 0 or num of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *rat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (cat == rat)
		{
			cat = head;
			while (cat != rat)
			{
				nodes++;
				cat = cat->next;
				rat = rat->next;
			}

			cat = cat->next;

			while (cat != rat)
			{
				nodes++;
				cat = cat->next;
			}
			return (nodes);
		}

		cat = cat->next;
		rat = (rat->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Print listint safely
 * @head: Pointer
 * Return: Num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
