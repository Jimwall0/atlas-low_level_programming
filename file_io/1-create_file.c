#include "main.h"
/**
 * 
*/
int create_file(const char *filename, char *text_content)
{
	char *buffer = NULL;
	int characters, check, file, text;

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
	{
		close(file);
		return (0);
	}
	text = open(text_content, O_RDWR);
	if (text < 0)
	{
		close(file);
		close(text);
		return (0);
	}
	buffer = malloc(sizeof(char) * strlen(text_content));
	if (!buffer)
	{
		close(file);
		close(text);
		free(buffer);
		return (0);
	}
	check = read(text, buffer, strlen(text_content));
	characters = write(file, buffer, check);
	close(file);
	close(text);
	free(buffer);
	if (characters < 0)
		return (0);
	return (characters);
}
