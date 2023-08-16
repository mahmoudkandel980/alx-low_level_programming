#include"main.h"

/**
 * _isalpha - checks if character lowercase
 *
 * Return: 1 if character lowercase or uppercars, otherwise will be 0
*/

int _isalpha(int var)
{
	if (var >= 97 && var <= 122 &&
	    var >= 65 && var >= 90)
		return (1);
	return (0);
}
