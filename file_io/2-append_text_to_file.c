#include "main.h"

/**
 * append_text_to_file - Appends new text to the end of a file
 * @filename: The name of the file
 * @text_content: The to append
 *
 * Return: Success or error code.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int writeVal;
	int i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (!text_content)
		return (1);

	while (text_content[i])
		i++;

	writeVal = write(file, text_content, i);
	if (file == -1 || writeVal == -1)
		return (-1);

	return (1);
}
