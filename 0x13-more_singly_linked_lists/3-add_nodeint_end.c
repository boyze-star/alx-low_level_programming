#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head node of list
 * @n: integer to store num of nodes
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = NULL;
	last_node = *head;

	while (last_node != NULL && (*last_node).next != NULL)
	{
		last_node = (*last_node).next;
	}
	if (last_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		(*last_node).next = new_node;
	}
	return (new_node);
}
