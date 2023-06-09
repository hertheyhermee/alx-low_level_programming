#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashFunc;
	int x;

	hashFunc = 5381;
	while ((x = *str++))
	{
		hashFunc = ((hashFunc << 5) + hashFunc) + x;
	}
	return (hashFunc);
}
