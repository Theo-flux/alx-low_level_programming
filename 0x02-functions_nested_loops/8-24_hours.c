#include "main.h"
/**
 * jack_bauer - Entry function
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i, m;
for (i = 0; i < 24; ++i)
{
for (m = 0; m < 60; ++m)
{
if (i < 10)
{
_putchar('0');
}
_putchar('0' + i);
printf(":");
if (m < 10)
{
_putchar('0');
}
_putchar('0' + m);
_putchar('\n');
}
m = 0;
}
}
