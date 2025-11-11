#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: integer
 * @argv: character
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (get_op_func(argv[2]) == NULL)
{
	printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", op_func(num1, num2));
return (0);
}
