#include "main.h"

/**
 * cannot_read - Exits the process if a file could not be read.
 * @filename: The file that could not be copied
 */
void cannot_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", filename);
	exit(98);
}

/**
 * cannot_write - Exits the process if a file could not be written.
 * @filename: The file that cannot be written to.
 */
void cannot_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", filename);
	exit(99);
}

/**
 * close_file - Closes the file so it can no longer be accessed.
 * @file: The file to close
 */
void close_file(int file)
{
	if (close(file))
	{
		dprintf(STDERR_FILENO, "Error: Cannot close file: %d\n", file);
		exit(100);
	}
}

/**
 * main - A copy file function
 * @argc: The argument count
 * @argv: The arguments to use
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int target_file;
	int new_file;
	int write_val;
	int read_val;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp target_file new file\n");
		exit(97);
	}

	target_file = open(argv[1], O_RDONLY);
	if (target_file == -1)
		cannot_read(argv[1]);

	read_val = read(target_file, buffer, 1024);
	if (read_val == -1)
		cannot_read(argv[1]);

	new_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (new_file == -1)
		cannot_write(argv[2]);

	while (read_val > 0)
	{
		write_val = write(new_file, buffer, read_val);
		if (write_val == -1)
			cannot_write(argv[2]);

		read_val = read(target_file, buffer, 1024);
		if (read_val == -1)
			cannot_read(argv[1]);
	}
	
	close_file(target_file);
	close_file(new_file);

	return (0);
}
