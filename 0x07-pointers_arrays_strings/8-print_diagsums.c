#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagonal sums
 * @a: 2d array
 * @size: the size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
	}
	for (j = 1; j <= size; j++)
	{
		sum2 += a[(j * size) - j];
	}

	printf("%i, %i\n", sum1, sum2);
}
