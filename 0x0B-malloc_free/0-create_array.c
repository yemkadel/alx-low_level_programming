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

	ptr = malloc(sizeof(char) * size);
	ptr[0] = c;
	return (ptr);
}
