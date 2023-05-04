#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head node of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *temp;

    if (h == NULL || *h == NULL)
        return (size);

    while (*h != NULL)
    {
        size++;
        temp = *h;
        *h = (*h)->next;
        free(temp);
        if (temp <= *h) /* Check if the address of the current node is less than or equal to the address of the next node. */
        {
            *h = NULL; /* If it is, set the head to NULL to indicate that the list has been fully freed. */
            break;
        }
    }

    return (size);
}
