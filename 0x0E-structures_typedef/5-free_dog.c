#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog struct from memory.
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
