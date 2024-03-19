#include "main.h"
/**
 * read_textfile - reads the content of a file
 * @filename: handlebar of the file
 * @letters: flags to adjust commands
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int num, fd;
	char space[20];

	fd = open(filename, O_RDONLY);
	num = read(fd, space, letters);
	write(1, space, letters);
	return (num);
}
