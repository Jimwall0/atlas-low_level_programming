#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the text file
 * @letters: the character count of the file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[500];
	int file, letter;

	file = open(filename, O_RDONLY);
	letter = read(file, buffer, letters);
	write(1, buffer, letter);
	return (letter);
}
