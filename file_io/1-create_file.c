#include "main.h"
/**
 * create_file = makes a new text file
 * @filename: name of the file
 * @text_content: content of file
 * Return: total characters or 0 on false
*/
int create_file(const char *filename, char *text_content)
{
	char *buffer = NULL;
	int characters, file, loop = 0;

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
		return (0);
	while (text_content[loop] != '\0')
		loop++;
	buffer = malloc(sizeof(char) * loop + 1);
	if (!buffer)
	{
		close(file);
		free(buffer);
		return (0);
	}
	for (loop = 0; text_content[loop] != '\0'; loop++)
		buffer[loop] = text_content[loop];
	characters = write(file, buffer, loop + 1);
	close(file);
	free(buffer);
	if (characters < 0)
		return (0);
	return (characters);
}
