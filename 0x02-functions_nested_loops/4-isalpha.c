#include"main.h"

/**
 * _isalpha - checks if character lowercase
 *
 * Return: 1 if character lowercase or uppercars, otherwise will be 0
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
