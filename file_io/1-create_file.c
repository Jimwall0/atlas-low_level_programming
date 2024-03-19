#include "main.h"
/**
 * create_file - makes a new file
 * @filename: the name of the new file
 * @text_content: the new content of the file
 * Return: on success
*/
int create_file(const char *filename, char *text_content)
{
	int fcheck, fd, string;

	if (filename == NULL)
	return (-1);
	fcheck = creat(filename, 0600);
	if (fcheck < 0)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (fd < 0)
		return (-1);
	string = strlen(text_content);
	write(fcheck, text_content, string);
	return (1);
}
