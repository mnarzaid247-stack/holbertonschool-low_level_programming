#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: integer
 * @argv: character
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
