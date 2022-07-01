#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checked
 * @b: the size
 *
 * Return: address
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
