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
	int slen = _strlen(src);

	while (src[i] != '\0')
	{
		dlen = dlen;
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	return (dest);
}

