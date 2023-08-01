#include "lists.h"

/**
 * add_nodeint_end - Add new node at the end
 * @head: Pointer
 * @n: Integer
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *num;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		num = *head;
		while (num->next != NULL)
			num = num->next;
		num->next = new;
	}

	return (*head);
}
