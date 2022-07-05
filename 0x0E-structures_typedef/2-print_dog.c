#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - the function prints a dog struct
 * @d: dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((d->name) == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if ((d->owner) == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);

	}
}
