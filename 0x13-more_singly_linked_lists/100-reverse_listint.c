#include "lists.h"

/**
 * reverse_listint - reverses a linstint_t linked list
 * @head: pointer to a pointer to first node of list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	while (current != NULL)
	{
		next = (*current).next;
		(*current).next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
