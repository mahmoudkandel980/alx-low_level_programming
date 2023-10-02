
#include "main.h"
#include <stdio.h>

/**
 * error_file - check function
 * 
 * @file_from: file_from
 * @file_to: file_to
 * @argv: vector of arguments
 * 
 * Return: nothing.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - check function
 * 
 * @argc: arguments number
 * @argv: vector of arguments
 * 
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t numberChars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	numberChars = 1024;
	while (numberChars == 1024)
	{
		numberChars = read(file_from, buf, 1024);
		if (numberChars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, numberChars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
