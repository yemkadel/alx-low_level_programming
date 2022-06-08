#include <stdio.h>
/**
 * main - this is the main
 * @n: number to check for
 *
 * Return: return
 */
void multiple(int n);

int main(void)
{
	multiple(1024);
	return (0);
}

/**
 * multiple - this iis the func
 * @n: th epara
 *
 * Return: void
 */
void multiple(int n)
{
	int i, sum = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if ((i % 3 == 0) || (i % 5 == 0))
			{
				sum += i;
			}
		}
		printf("%i\n", sum);
	}
}
