#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);

#endif
