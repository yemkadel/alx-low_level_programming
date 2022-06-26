#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: count
 * @argv: pointer
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] && i <= argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
