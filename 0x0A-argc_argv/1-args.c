#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry function
 * @argc: offset count
 * @argv: offset array
 * Return 0
 */
int main(int argc, char* argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
