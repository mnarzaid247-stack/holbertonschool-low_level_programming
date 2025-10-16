#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic letter
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if (c <= 65 || c >= 122)
	return (0);
else
	return (1);
}
