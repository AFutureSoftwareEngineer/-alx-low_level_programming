#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: interger to check and to be printed
 * Return: 1 if charcter is lower and 0 if not.
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
