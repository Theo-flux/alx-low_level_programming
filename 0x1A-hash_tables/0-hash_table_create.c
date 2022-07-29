#include <stdlib.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table.
 *
 * @size: The size of the array
 * Returns: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *head;
    unsigned long int i = 0;

    head = (hash_table_t *)malloc(sizeof(hash_table_t));

    if (head == NULL)
    {
        free(head);
        return NULL;
    }

    head->size = size;
    head->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);

    if (head->array == NULL)
    {
        free(head->array);
        return NULL;
    }

    while (i < size)
    {
        head->array[i] = NULL;
        i++;
    }

    return head;
}