#include "main.h"
#include <string.h>
/**
 * _strncat - Entry function
 * @dest: pointer to char type
 * @src: pointer to char type
 * @n: number of src char to concatenate with dest char
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, dest_len;
dest_len = strlen(dest);
for (i = 0; i < n; ++i)
{
dest[dest_len + i] = src[i];
}
return (dest);
}
