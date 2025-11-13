#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: character
 * @n: integer
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != n - 1 && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(args);
}
