#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints the numbers passed
 * @separator: this is the sperator to use
 * @n: number of ints passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list args;

	if (separator)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			j = 0;
			while (separator[j] != '\0' && i < (n - 1))
			{
				printf("%c", separator[j]);
				j++;
			}
		}
		va_end(args);
		printf("\n");
	}
}
