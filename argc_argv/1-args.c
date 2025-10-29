#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 * @argc: ineger
 * @argv: character
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
