#include "lists.h"

/**
 * get_nodeint_at_index - returns the sum of all the data (n) of a listint_t linked list
 * @head; pointer to head of list
 * @index: index of node to return
 *
 * Return: sum of data to the nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (!head)
		{
			return (NULL);
		}
		head = (*head).next;
	}
	return (head);
}
