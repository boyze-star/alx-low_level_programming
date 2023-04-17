#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - dog and owner information
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 *
 * Description: Longer description
 */
struct dog
{
        char *name;
        float age;
        char  *owner;
}
typedef struct dog dog_t;
struct dog *new_dog(char *name, float age, char *owner)
{
        struct dog *my_dog;

        my_dog = malloc(sizeof(struct dog));
        if (my_dog == NULL)
        {
                return (NULL);
        }
        my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
                                                                                                                      1,8           Topi
