#include <stdio.h>
/**
 * print_array - the functions prints an array till n
 * @a: the array
 * @n: the nth value
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%i", *(a + i));
			if ((i + 1) < n)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("");
	}
}
