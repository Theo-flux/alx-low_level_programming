#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer to char
 * Return: int
 */
int _strlen_recursion(char *s)
{
unsigned int i = 0;
if (*s > '\0')
{
	i += _strlen_recursion(s + 1) + 1;
}
return (i);
}
