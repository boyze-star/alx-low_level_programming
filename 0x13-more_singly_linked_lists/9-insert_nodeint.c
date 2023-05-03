#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index position
 * @head: pointer to pointer to head in list
 * @idx: index of list where node is to be added
 * @n: data for new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (!head || !*head || idx == 0)
	{
		return (add_nodeint_end(head, n));
	}
	new_node = malloc(sizeof(listint_t));
	
	if (!new_node)
	{
		return (NULL);
	}
	(*new_node).n = n;
	temp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
		{
			free(new_node);
			return (NULL);
		}
		temp = (*temp).next;
	}
	(*new_node).next = (*temp).next;
	(*temp).next = new_node;

	return (new_node);
}
