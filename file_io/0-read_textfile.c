#include "main.h"

/**
 * end - Simple helper to close the file read and free memory.
 * @file: The file to close.
 * @buffer: The memory to free
 *
 * Return: Always 0
 */
int end(int file, char *buffer)
{
	free(buffer);
	close(file);
	return (0);
}

/**
 * read_textfile - Reads file and prints to console
 * @filename: Name of the file
 * @letters: The limit of letters to print
 *
 * Return: The amount of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer = malloc(sizeof(char) * letters);
	int readVal;
	int writeVal;

	if (!filename || !buffer)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	readVal = read(file, buffer, letters);
	if (readVal == -1)
		return (end(file, buffer));

	writeVal = write(STDOUT_FILENO, buffer, readVal);
	if (writeVal == -1 || writeVal != readVal)
		return (end(file, buffer));

	end(file, buffer);

	return (writeVal);
}
