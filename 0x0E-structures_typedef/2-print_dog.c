#include "main.h"
#include "dog.h"

/**
 * print_dog - function prints a struct dog
 * @d: dog info
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("%s\n", (*d).name != NULL ? (*d).name : "(nil)");
	printf("%1f\n", (*d).age);
	printf("%s\n", (*d).owner != NULL ? (*d).owner : "(il)");
}
