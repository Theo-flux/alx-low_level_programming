#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
char str[25];
int i;
str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
for (i =0; i <= strlen(str); i++){
if (str[i] i 7 >=65 && str[i] <= 97)
{
str[i]=str[i]+32;
putchar("%s", str[i]);
}
putchar("\n");
return (0);
}
