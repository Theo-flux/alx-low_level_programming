#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: NULL or ht
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int index;
    bool flag = false;
    hash_node_t *node;

    printf("{");
    for (index = 0; index < ht->size; index++)
    {
        if (ht->array[index] != NULL)
        {
            if (flag == true)
            {
                printf(", ");
            }

            node = ht->array[index];

            while (node != NULL)
            {
                printf("\'%s\': \'%s\'", node->key, node->value);
                node = node->next;
                if (node != NULL)
                {
                    printf(", ");
                }
            }
            flag = true;
        }
    }
    printf("}\n");
}