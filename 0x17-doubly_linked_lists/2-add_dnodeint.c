#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning if a dlistint_t list
 * @h: pointer to pointer to head node
 * @n: integer n
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));	
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = newNode->next = NULL;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
		newNode->next = *head;
	}
	*head = newNode;
	return (newNode);
}
