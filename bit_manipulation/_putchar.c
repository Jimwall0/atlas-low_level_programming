#include "main.h"
/**
 * _putchar = prints a single char
 * @character = a character
 * Return: returns the output
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
