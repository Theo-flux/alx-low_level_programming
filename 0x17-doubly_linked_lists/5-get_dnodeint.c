#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
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
