#include "lists.h"
/**
 * get_nodeint_at_index - Return nth node of the list
 * @head: Pointer
 * @index: Index of node
 *
 * Return: Pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int a = 0;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
