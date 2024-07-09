#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the text file
 * @letters: the character count of the file
 * Return: count of characters or 0 on false
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int check = 0, file = 0, count;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (!file)
	{
		free(buffer);
		close(file);
		return (0);
	}
	check = read(file, buffer, letters);
	if (!check)
	{
		free(buffer);
		close(file);
		return (0);
	}
	count = write(1, buffer, check);
	if (!count)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (count);
}
