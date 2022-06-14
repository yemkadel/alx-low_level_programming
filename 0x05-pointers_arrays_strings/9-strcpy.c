#include "main.h"
/**
 * _strcpy - copies src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: char array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
