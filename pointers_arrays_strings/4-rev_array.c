#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: integer
 * @n: integer
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int z = 0;
int s = n - 1;
for(i = 0 ; i != n / 2 ; i++ ,s--)
{
j = a[i];
z = a[s];
a[s] = j;
a[i] = z;
}
}
