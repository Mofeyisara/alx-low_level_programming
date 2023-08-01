#include "lists.h"
/**
 * sum_listint - The sum of all data of listint
 * @head: Pointer
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
