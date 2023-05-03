#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list.
 * @head: pointer to pointer to head of the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
