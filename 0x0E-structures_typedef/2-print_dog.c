#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 * Return: struct dog
 */

void print_dog (struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
