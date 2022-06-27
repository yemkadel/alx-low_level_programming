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
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * str_concat - string concatenation
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to a new string
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	if (!s1)
		s1[0] = '\0';
	if (!s2)
		s2[0] = '\0';

	int j, i, sl = _strlen(s1) + _strlen(s2);

	nstr = (char *) malloc(sizeof(char) * (sl + 1));
	if (!nstr)
		return ('\0');

	for (i = 0; i < _strlen(s1); i++)
		nstr[i] = s1[i];

	for (j = i, i = 0; i < _strlen(s2); j++, i++)
		nstr[j] = s2[i];

	nstr[j] = '\0';
	return (nstr);
}
