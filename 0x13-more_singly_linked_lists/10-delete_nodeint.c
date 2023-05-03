#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at indx of list
 * @head: pointer to header of liknked list
 * @index: index of node to be deleted
 *
 * Return: 1(Success), 0(Error)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = (*current).next;

		if (current == NULL || (*current).next == NULL)
			return (-1);
	}
	temp = (*current).next;
	(*current).next = (*temp).next;
	free(temp);
	return (1);
}
