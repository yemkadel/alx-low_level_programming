#include "main.h"
/**
 * _strlen - this function returns the lenght of a string
 * @s: the string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
