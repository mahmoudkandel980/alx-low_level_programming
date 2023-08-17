#include "main.h"
/**
 *_isdigit - is a function checks for a digit.
 *@c: is input.
 *Return: 0 for uppercase, other will be lowercase
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
