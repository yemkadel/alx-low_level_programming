#include <stdio.h>
/**
 * main - the main
 *
 * Return: return
 */

int main(void)
{
	long i, num, a = 1, b = 2, sum, n = 4000000;

	for (i = b; sum <= n; i++)
	{
		num = a + b;
		a = b;
		b = num;
		if (a % 2)
		{
			sum += a;
		}
	}
	printf("%li\n", sum);
	return (0);
}
