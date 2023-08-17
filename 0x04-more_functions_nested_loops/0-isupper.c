#include "main.h"
/**
 *_isupper - is check if letters are uppercase or not.
 *@c: is input.
 *Return: 1 if c uppercase others willb be 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
