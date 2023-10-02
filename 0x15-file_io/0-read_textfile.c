#include "main.h"

/**
 * read_textfile - function reads a text
 * 
 * @filename: string param
 * @letters: numbers of letters param.
 *
 * Return: if fail 0, else numbers of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDr;
	ssize_t nrdir, nwr;
	char *buffer;

	if (filename == NULL){
		return (0);
    }

	fileDr = open(filename, O_RDONLY);

	if (fileDr == -1)
    {
		return (0);
    }

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrdir = read(fileDr, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrdir);

	close(fileDr);

	free(buffer);

	return (nwr);
}
