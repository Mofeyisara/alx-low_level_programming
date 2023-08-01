#include "lists.h"
/**
 * free_listint - Free listint_t
 * @head: Pointer
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
