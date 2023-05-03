#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head node of linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *prev = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		if (current < prev)
		{
			printf("-> [%p] %d\n", (void *)current, (*current).n);
			break;
		}
		printf("[%p] %d\n", (void *)current, (*current).n);
		prev = current;
		current = (*current).next;
		count++;
	}
	if (current == NULL)
	{
		fprintf(stderr, "Error: infinite loop detected in list\n");
		exit(98);
	}
	return (count);
}
