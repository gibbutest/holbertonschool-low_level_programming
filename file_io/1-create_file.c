#include "main.h"

/**
 * create_file - Creates a file with text
 * @filename: The name of the file
 * @text_content: The text add to the file
 *
 * Return: Success or error code.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int writeVal;
	int i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (!text_content)
		return (1);

	while (text_content[i])
		i++;

	writeVal = write(file, text_content, i);
	if (file == -1 || writeVal == -1)
		return (-1);

	return (1);
}
