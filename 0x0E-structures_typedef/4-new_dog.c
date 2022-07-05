#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - length
 * @str: the string pointer
 *
 * Return: int
 */
int _strlen(char *str)
{
	int i = 0;

	if (str[i] != '\0')
		i++;
	return (i);
}
/**
 * new_dog - function creates a new dog
 * @name: the name of the new dog
 * @age: the age
 * @owner: the owner of the dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len_name, len_owner;

	dog = malloc(sizeof(*dog));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog->name = malloc(len_name + 1);
	dog->owner = malloc(len_owner + 1);
	if (!(dog->name) || !(dog->owner))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; i <= len_owner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);

}
