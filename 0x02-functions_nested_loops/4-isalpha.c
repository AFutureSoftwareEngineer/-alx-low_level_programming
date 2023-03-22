#include "main.h"

/**
 * _isalpha - checks for lowercase letters
 * @c: interger to check and to be printed
 * Return: 1 if charcter is lower or upper or number  and 0 if not.
 */

int _isalpha(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
