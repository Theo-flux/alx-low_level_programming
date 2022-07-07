#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newNode;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return NULL;
	}

	newNode->n = n;
	newNode->prev = newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp=tmp->next;
	}
	tmp->next = newNode;
	newNode->prev = tmp;

	return (newNode);
}
