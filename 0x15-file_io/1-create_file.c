
#include "main.h"

/**
 * create_file - function creates a file
 * 
 * @filename: string param.
 * @text_content: string param.
 *
 * Return: if success 1, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fileDir;
	int numberOfLetter;
	int rwr;

	if (filename == NULL)
    {
		return (-1);
    }

	fileDir = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDir == -1)
    {
		return (-1);
    }

	if (text_content == NULL)
    {
		text_content = "";
    }

	for (numberOfLetter = 0; text_content[numberOfLetter]; numberOfLetter++)
		;

	rwr = write(fileDir, text_content, numberOfLetter);

	if (rwr == -1)
    {
		return (-1);
    }

	close(fileDir);

	return (1);
}
