#include "main.h"

/**
* _islower - function checks for lowercase
*
* Return: 1 if lowercase other will return 0 (success)
*/

int _islower(int var)
{
	if (var >= 'a' && var <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
