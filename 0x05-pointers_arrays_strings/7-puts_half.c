#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Entry function
 * @str: pointers
 * Return: nothing
 */
void puts_half(char *str)
{
int i, start, count;
count = strlen(str);
if (count % 2)
{
start = count / 2;
}
else
{
start = (count - 1) / 2;
}
for (i = start + 1; i < count; ++i)
{
printf("%c", str[i]);
}
printf("\n");
}
