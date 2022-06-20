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
	int i = 0;
	int j, tempIndex;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i])
		{
			j = 0;
			tempIndex = i;
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[tempIndex])
				{
					j++;
					tempIndex++;
				}
				else
				{
					break;
				}
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
