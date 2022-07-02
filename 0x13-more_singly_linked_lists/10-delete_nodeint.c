#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *tmp, *prev;
        unsigned int i = 0;

        tmp = (listint_t *) malloc(sizeof(listint_t));
        prev = (listint_t *) malloc(sizeof(listint_t));

        if (tmp == NULL)
        {
                free(tmp);
        }

        if ((*head) == NULL || head == NULL)
        {
                return -1;
        }

        tmp = (*head);

        if (prev == NULL)
        {
                free(prev);
        }

        while (i < index)
        {
                prev = tmp;
                tmp = tmp->next;
                i++;
        }

        prev->next = tmp->next;
        free(tmp);
        return 1;
}
