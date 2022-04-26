#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: Pointer to string variable
 * @c: char variable type
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; i < strlen(s) && s[i] != '\0'; i++)
{
	if (*s == c)
	{
		return (s);
	}
	s++;
}
if (*s == c)
{
	return (s);
}
return (0);
}
