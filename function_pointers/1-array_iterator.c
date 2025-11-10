#include "function_pointers.h"
/**
 * array_iterator - executes a function
 *
 * @array: integer
 * @size: size_t
 * @action: function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0 ; i < size ; i++)
action(array[i]);
}
