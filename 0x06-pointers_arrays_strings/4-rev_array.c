#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array using nth value
 * @a: array pointer
 * @n: lent
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int *b, i;
	b = a;

	for (i = 1; i <= n; i++)
	{
		b[i - 1] = a[n - i];
	}
	a = b;
}
