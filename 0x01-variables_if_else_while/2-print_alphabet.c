
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
size_t i;
for (i = 0; i < strlen(str); ++i)
{
putchar("%c", tolower((unsigned char) str[i]));
}
putchar("\n");
return (0);
}
