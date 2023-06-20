#include "main.h"
#include "dog.h"

/**
 * free_dog - function frees dog
 * @d: dog to be freed
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
