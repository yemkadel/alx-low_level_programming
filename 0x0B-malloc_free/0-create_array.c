#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - func creates and array
 * @size: the size of the array
 * @c: char to initize array with
 *
 * Return: a pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size <= 0)
	{
		return ('\0');
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (!ptr)
			return ('\0');

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
