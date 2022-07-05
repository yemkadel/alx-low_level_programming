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
		if (d->name)
			printf("Name: %s\n", d->name);

		else if(!(d->name))
			printf("Name: (nil)\n");

		if (d->age)
			printf("Age: %.6f\n", d->age);
		else if(!(d->age))
			printf("Age: (nil)\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else if (!(d->owner))
			printf("Owner: (nil)\n");
	}
}
