#include "main.h"
#include "dog.h"

/**
 * new_dog - function creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: new dog's ownner
 *
 * Return: new dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	(*new_dog).name = malloc((strlen(name) + 1) * sizeof(char));
	(*new_dog).owner = malloc((strlen(owner) + 1) * sizeof(char));

	if ((*new_dog).name == NULL || (*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free((*new_dog).owner);
		free(new_dog);
	}
	return (new_dog);
}
