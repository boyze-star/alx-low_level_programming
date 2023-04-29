#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: pointer to element list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
