#include "main.h"
/**
 * more_numbers - Entry function
 * Return: void.
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i < 11)
{
for (j = 0; j < 15; ++j)
{
if (j > 9)
{
_putchar('0' + j / 10);
_putchar('0' + j % 10);
}
else
{
_putchar('0' + j);
}
}
_putchar('\n');
++i;
}
}
