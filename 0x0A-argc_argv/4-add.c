#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main func
 * @argc: the count of arguments
 * @argv: the pointer to the arguments
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
