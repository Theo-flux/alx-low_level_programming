#include <stdio.h>
/**
 * main - Entry function
 * @argc: offset count
 * @argv: offset valuei
 * Return 0
 */
int main(int argc, char*argv[])
{
int i;
for (i=0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return 0;
}
