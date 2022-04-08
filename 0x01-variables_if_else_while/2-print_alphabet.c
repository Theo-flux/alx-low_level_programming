#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/*
 * main function
 * return 0 always (Success)
 */
int main(void)
{
int n;
char str;
str = "abcdefghijklmnopqrstuvwxyz";
srand(time(0));
n = rand() - RAND_MAX / 2;
for (int i = 0; i < strlen(str); i++)
{
putchar("%c", tolower((unsigned char) str[i]));
}
putchar("\n");
return (0);	
}
