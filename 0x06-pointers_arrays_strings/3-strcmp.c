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
	int n_s1, n_s2;
	int i = 0, num;

	while (s1[i] && s2[i])
	{
		n_s1 = s1[i];
		n_s2 = s2[i];

		if (n_s1 > n_s2)
		{
			num = 15;
		}
		else if (n_s1 < n_s2)
		{
			num = -15;
		}
		else
		{
			num = 0;
		}
		i++;
	}
	return (num);
}
