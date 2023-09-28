#include "main.h"

/**
 * get_endianness - function returns the endianness of the system
 *
 * Return: if big endian return 0, if small return 1
 */

int get_endianness(void)
{
	unsigned long int number = 1;

	return (*(char *)&number);
}
