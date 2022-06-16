#include "main.h"
/**
 * _strcat - conacts two strings
 * @dest: destination array
 * @src: source arry
 *
 * Return: char array
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dlen = _strlen(dest);

	while (src[i])
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	return (dest);
}

/**
 * _strlen - get string len
 * @s: char array
 *
 * Return: Int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

