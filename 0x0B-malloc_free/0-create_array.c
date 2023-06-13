#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * ceate_array - function creates array and replaces intialised
 * pointer with specified char
 * @size: size of array
 * @c: char to replace
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
        unsigned int i = 0;
    
    if (size == 0)
    {
        printf("Unable to allocate memory\n");
        return (NULL);
    }
    array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
    {
        printf("Array is  empty\n");
        return (NULL);
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            array[i] = c;
        }
    }
    return (array);
}
