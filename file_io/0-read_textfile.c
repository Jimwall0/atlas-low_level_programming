#include "main.h"
/**
 * read_textfile - reads the content of a file
 * @filename: handlebar of the file
 * @letters: flags to adjust commands
 * Return: number of printed characters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int num, fd, out;
	char *space = NULL;

	space = malloc(sizeof(char) * letters + 1);
	if (space == NULL)
	{
		free(space);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	num = read(fd, space, letters);
	if (num < 0)
		return (0);
	out = write(STDERR_FILENO, space, num);
	if (out < 0)
		return (0);
	close(fd);
	return (num);
}
