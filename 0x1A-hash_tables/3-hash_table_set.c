#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: pointer to the key
 * @value: pointer to the value
 * Returns: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new;
    unsigned long int index, i;
    char *val_cp, *key_cp;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
    {
        return (0);
    }

    val_cp = strdup(value);

    index = key_index((const unsigned char *)key, ht->size);

    for (i = index; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = val_cp;
            return 1;
        }
    }

    new = (hash_node_t *)malloc(sizeof(hash_node_t));

    if (new == NULL)
    {
        free(new);
    }
    key_cp = strdup(key);
    new->key = key_cp;

    if (new->key == NULL)
    {
        free(new);
        return 0;
    }

    new->value = val_cp;
    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}