#include <stdio.h>
/**
 * main - this is main
 *
 * Description: this is the description
 * Return: the main return 0
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x =  i + 1; x < 10; x++)
		{
			putchar(i + '0');
			putchar(x + '0');
			if ((i == 8) && (x == 9))
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
