#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the text file
 * @letters: the character count of the file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int file, letter;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (!file)
	{
		free(buffer);
		return (0);
	}
	letter = read(file, buffer, letters);
	if (!letter)
	{
		free(buffer);
		return (0);
	}
	write(1, buffer, letter);
	close(file);
	return (letter);
}
