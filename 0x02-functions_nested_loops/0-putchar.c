#include "main.h"
/**
 * main - Entry for main function
 * Description: Program to print _putchar, followed by a line
 * return: 0 Always (Success)
 */
int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}

