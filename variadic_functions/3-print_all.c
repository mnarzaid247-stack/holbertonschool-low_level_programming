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
printf("%s", sep);
printf("%c", va_arg(args, int));
sep = ", ";
break;
case 'i':
printf("%s", sep);
printf("%d", va_arg(args, int));
sep = ", ";
break;
case 'f':
printf("%s", sep);
printf("%f", va_arg(args, double));
sep = ", ";
break;
case 's':
{
str = va_arg(args, char *);
printf("%s", sep);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
sep = ", ";
break;
}
}
i++;
}
printf("\n");
va_end(args);
}
