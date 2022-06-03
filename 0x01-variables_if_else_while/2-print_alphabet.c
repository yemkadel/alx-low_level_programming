#include <stdio.h>
/**
 * main - this is main
 *
 * Description: this is the description
 * Return: the main return 0
 */
int main(void)
{
	char x = 'a';

	do {
		putchar(x);
		x++;
	} while (x < 'z');
	putchar('\n');
	return (0);
}
