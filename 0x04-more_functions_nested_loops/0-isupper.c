#include "main.h"
/**
 * _isupper - Entry function
 * @c: integer
 * Resukt: Always 0 or 1
 */
int _isupper(int c)
{
if (c > 'A' && c < 'Z')
{
return (1);
}
else if (c > 'a' && c < 'z')
{
return (0);
}
}
