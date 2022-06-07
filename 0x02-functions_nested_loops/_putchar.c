#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	printf("%c", _putchar('x'));
	return (0);
}
