#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t.
 * @head: Ponter to head.
 * @index: Integer.
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;
	tmp = (dlistint_t *) malloc(sizeof(dlistint_t));
	
	if (tmp == NULL)
	{
		free(tmp);
		return NULL;
	}
	tmp = head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
