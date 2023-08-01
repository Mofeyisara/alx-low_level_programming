#include "lists.h"
/**
 * reverse_listint - Reverse a listint
 * @head: Pointer
 * Return: Pointer to first new node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}

	*head = old;
	return (*head);
}
