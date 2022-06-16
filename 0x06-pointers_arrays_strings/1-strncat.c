#include "main.h"
/**
 * _strncat - conacts two strings
 * @dest: destination array
 * @src: source arry
 * @n: the n value
 *
 * Return: char array
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dlen = _strlen(dest);

	while (i < n)
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

