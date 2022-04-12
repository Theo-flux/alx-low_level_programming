#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Entry function
 * 
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i,m;
for (i = 0; i < 24; ++i)
{
for (m = 0; m < 60; ++m)
{
if(i < 10)
{
printf("0");
}
printf("%d", i);
printf(":");
if(m < 10)
{
printf("0");
}
printf("%d", m);
printf("\n");
}
m = 0;
}
}
