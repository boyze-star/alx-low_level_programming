#include "main.h"
#include "dog.h"

/**
 * print_dog - function prints a struct dog
 * @d: dog info
 * @dog: struct name
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (*d).name != NULL ? (*d).name : "(nil)");
	if ((*d).age != 0.0f)
	{
		printf("Age: %1f\n", (*d).age);
	}
	else
	{
		printf("(nil)");
	}
	printf("Owner: %s\n", (*d).owner != NULL ? (*d).owner : "(nil)");
}
