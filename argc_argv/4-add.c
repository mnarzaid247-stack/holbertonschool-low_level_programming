#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  adds positive numbers
 *
 * @argc: integer
 * @argv: character
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
int i = 1;
int num;
int j;
int num2 = 0;
if (argc <= 1)
{
printf("%d\n", num2);
return (0);
}
while (i <= argc - 1)
{
for (j = 0 ; argv[i][j] != '\0' ; j++)
{
if (isdigit(argv[i][j]))
{
}
else
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
num2 = num2 + num;
i++;
}
printf("%d\n", num2);
return (0);
}
