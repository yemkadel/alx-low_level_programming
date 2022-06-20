#include "main.h"
/**
 * _strstr - function to find a substring
 * @haystack: strng
 * @needle: substring
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
				return (&haystack[j]);
		}
	}
	return ('\0');
}
