#include <stdio.h>
/**
 * main - the main
 *
 * Return: return
 */

int main(void)
{
	int i, num, a = 1, b = 2, n = 50;

	printf("%i, %i", a, b);
	for (i = b; i < n; i++)
	{
		num = a + b;
		a = b;
		b = num;
		printf(", %i", num);
	}
	return(0);
}
