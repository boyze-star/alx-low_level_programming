#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - fuction print a struct dog
 * @d: pointer to struct
 *
 * Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
