#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - func gets the lenght of a string
 * @s: string
 *
 * Return: Int
 */
int _strlen(char *s)
{
	int i = 1;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strdup - the func
 * @str: pointer to a string
 *
 *
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (*str == '\0')
		return ('\0');
	ptr = (char *) malloc(sizeof(char) * _strlen(str));
	if (!ptr)
		return ('\0');

	for (i = 0; i < _strlen(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
