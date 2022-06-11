#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: void
 */
void highestPrimefactor(long n);
int isPrimeFactor(long n);

int main(void)
{
	long n = 612852475143;

	highestPrimefactor(n);
	return (0);


}

void highestPrimefactor(long n)
{
	long i, x;

	for (i = 1; i <= (n / 2); i++)
	{
		if (n % i == 0)
		{
			if (isPrimeFactor(i) == 1)
			{
				x = i;
			}
		}
	}
	printf("The highest prime factor of %li -> %li", n, x);
}

int isPrimeFactor(long n)
{
	long i;

	for (i = 2; i <= (n / 2); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
