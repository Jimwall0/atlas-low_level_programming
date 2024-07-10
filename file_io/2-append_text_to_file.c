#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: what to append
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, characters, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	while (text_content[size] != '\0')
		size++;
	characters = write(file, text_content, size);
	if (characters < 0)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
