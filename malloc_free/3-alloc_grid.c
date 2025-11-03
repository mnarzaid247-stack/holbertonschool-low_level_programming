#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: integer
 * @height: integer
 *
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
int **p;
int i;
int j;
if (width <= 0)
	return (NULL);
if (height <= 0)
	return (NULL);
p = malloc(sizeof(int *) * height); 
for (j = 0 ; j < height ; j++)
    p[j] = malloc(sizeof(int) * width);  
if (p == NULL)
	return (NULL);
for (j = 0 ; j < height ; j++)
{
for (i = 0 ; i < width ; i++)
       p[j][i] = 0;
_putchar ('\n');
}
}
