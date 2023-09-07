#include "main.h"

/**
 * _calloc - function
 * @nmemb: parameter
 * @size: is a size
 * Return: is a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	unsigned int y = 0;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	
	x = malloc(nmemb * size);
	
	while (y < nmemb * size && x)
		((char *)x)[y++] = 0;
	
	return (x);
}
