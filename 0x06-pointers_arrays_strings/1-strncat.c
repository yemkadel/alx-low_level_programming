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
	int i = 0, i2;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (i2 = 0; i2 < n && src[i2] != '\0'; i2++, i++)
	{
		dest[i] = src[i2];
	}
	dest[i] = '\0';
	return (dest);
}
