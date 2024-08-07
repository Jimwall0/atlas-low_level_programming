#include "main.h"
/**
 * create_file - makes a new text file
 * @filename: name of the file
 * @text_content: content of file
 * Return: 1 on true or -1 on false
*/
int create_file(const char *filename, char *text_content)
{
	int characters, file, loop = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	while (text_content[loop] != '\0')
		loop++;
	characters = write(file, text_content, loop);
	if (characters == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
