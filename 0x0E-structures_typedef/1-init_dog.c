i#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @ame: pointer to char
 * @age: float variable
 * @owner: pointer to char
 * Return: No
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
