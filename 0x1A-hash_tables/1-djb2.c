#include "hash_tables.h"

/**
 * hash_djb2 - hashed function to a generates a djb2
 * @str: pointer to string
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long charsHash = 5381;
	int i;

	while ((i = *str++))
	charsHash = ((charsHash << 5) + charsHash) + i;

	return (charsHash);
}
