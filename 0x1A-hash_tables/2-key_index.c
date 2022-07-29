#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @size: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * Returns: The index at which key/value should be stored in the array of the
 * hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}