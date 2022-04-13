#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry function
 * Return: value
 */
void times_table(void)
{
int num, i, j, row;
num = 9;
for (i = 0; i < num + 1; ++i)
{
for (j = 0; j < num + 1; ++j)
{
row = i*j;
if (j == 9)
{
printf("%d", row);
}
else
{
if (row < 10)
{
printf("%d,  ", row);
}
else
{
printf("%d, ", row);
}
}
}
printf("\n");
}
}
