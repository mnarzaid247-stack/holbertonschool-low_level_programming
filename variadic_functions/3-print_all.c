#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print everything
 *
 * @format: character
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
char *str;
va_list args;
unsigned int i = 0;
char *sep = "";
va_start(args, format);
while (format && format[i] != '\0')
{
if (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
}
}
i++;
}
printf("\n");
va_end(args);
}
