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
	va_list args;

	va_start(args, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
	}
}
