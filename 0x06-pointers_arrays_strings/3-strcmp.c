#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string one
 * @s2: string two
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, val;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	val = s1[i] - s2[i];
	return (val);
}
