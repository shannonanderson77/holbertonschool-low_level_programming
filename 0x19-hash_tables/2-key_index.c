#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: key value
 * @size: the size of the array of the hash table
 * Return: an unsigned long integer value for the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

index = hash_djb2(key) % size;
return (index);

}
