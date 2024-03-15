#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdio.h>
#include <unistd.h>


unsigned int binary_to_uint(const char *b);
int _strlen(const char *string);
void print_binary(unsigned long int n);
int _putchar(char character);
int get_bit(unsigned long int n, unsigned int index);


#endif
