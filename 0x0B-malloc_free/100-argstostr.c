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

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * argstostr - arguments to string
 * @ac: argument count
 * @av: array pointer
 *
 * Return: pointer to char array
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, sl;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = (char *) malloc(sizeof(char *) * ac - 1);
	if (!ptr)
		return (NULL);

	j = 0;

	for (i = 0; i < ac; i++)
	{
		sl = _strlen(av[i]);
		k = 0;
		while (k < sl)
		{
			ptr[j] = av[i][k];
			j++;
			k++;
		}
		ptr[j++] = '\n';
	}
	ptr[j] = '\0';

	return (ptr);
}
