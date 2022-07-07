#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: pointer to header
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i = 0;
	
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	
	return i;
}