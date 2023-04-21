#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *s, *sep = "";

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", sep, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", sep, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", sep, (float)va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (!s)
                    s = "(nil)";
                printf("%s%s", sep, s);
                break;
            default:
                i++;
                continue;
        }
        sep = ", ";
        i++;
    }
    printf("\n");
    va_end(args);
}
