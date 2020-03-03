#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: is a parameter
 * @c: is a parameter
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *ptr;

    ptr = malloc(sizeof(char) * size);

    if (size > 0)
    {
        if (ptr != NULL)
        {
            for (i = 0; i < size; i++)
            {
                ptr[i] = c;
            }
            return (ptr);
        }
        else
            return (NULL);
    }
    return (0);
}