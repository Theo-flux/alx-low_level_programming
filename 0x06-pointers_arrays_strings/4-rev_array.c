#include "main.h"
/**
 * reverse_array - Entry function
 * @a: pointer to array
 * @n: length of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i = 0, half;
for (half = n / 2; half > 0; half--, i++)
{
a[n - i - 1] += a[i];
a[i] = a[n - i - 1] - a[i];
a[n - i - 1] = a[n - i - 1] - a[i];
}
}
