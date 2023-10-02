#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: string param
 * @text_content: string param
 *
 * Return: 1 if the file exists 1, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDir;
	int nubmersLetters;
	int rwr;

	if (filename == NULL){
		return (-1);
    }

	fileDir = open(filename, O_WRONLY | O_APPEND);
	if (fileDir == -1)
    {
		return (-1);
    }

	if (text_content)
	{
		for (nubmersLetters = 0; text_content[nubmersLetters]; nubmersLetters++)
			;

		rwr = write(fileDir, text_content, nubmersLetters);
		if (rwr == -1)
        {
			return (-1);
        }
	}

	close(fileDir);

	return (1);
}
