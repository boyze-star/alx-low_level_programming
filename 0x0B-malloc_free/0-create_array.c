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
        unsigned int i;
    
    if (size == 0)
    {
        printf("Unable to allocate memory\n");
        return (NULL);
    }
    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
    {
        printf("Array is  empty\n");
        return (NULL);
    }
    else
    {
        for (unsigned int i = 0; i < 0; i++)
        {
            array[i] = c;
        }
    }
    return (array);
}
