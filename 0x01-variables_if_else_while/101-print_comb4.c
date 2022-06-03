#include <stdio.h>
/**
 * main - this is main
 *
 * Description: this is the description
 * Return: the main return 0
 */
int main(void)
{
	int i, x, y;

	for (i = 0; i < 10; i++)
	{
		for (x =  i + 1; x < 10; x++)
		{
			for (y = x + 1; y < 10; y++)
			{
				putchar(i + '0');
				putchar(x + '0');
				putchar(y + '0');
				if ((i == 7) && (x == 8) && (y == 9))
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
	}
	return (0);
}
