#include "lists.h"
/**
 * pop_listint - Delete head node of listint_t
 * @head: Pointer
 * Return: Data of the deleted element or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
