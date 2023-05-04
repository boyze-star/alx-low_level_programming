#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head of list
 *
 * Return: num of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = fast = head;

	while (slow != NULL && fast != NULL && (*fast).next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, (*slow).n);
		count++;

		slow = (*slow).next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, (*slow).n);
			count++;
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			count++;

			return (count);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		count++;
		head = (*head).next;
	}
	return (count);
}
