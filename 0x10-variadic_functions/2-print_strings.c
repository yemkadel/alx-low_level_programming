#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints the numbers passed
 * @separator: this is the sperator to use
 * @n: number of ints passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(args, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(args);
}
