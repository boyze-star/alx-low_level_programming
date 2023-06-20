#include "main.h"
#include "dog.h"

/**
 * init_dog - function initialize a variable of type struct dog
 * @d: variable to be initialized
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name 
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
