#include "main.h"
/**
 * _putchar = prints a single char
 * @character = a character
 * Return: number of characters printed
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
