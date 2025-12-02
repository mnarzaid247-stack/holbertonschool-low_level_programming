#include "main.h"

/**
 * read_textfile - read and print a file
 *
 * @filename: character
 * @letters: size_t
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int r;
int w;
int i;
char *buffer = malloc(sizeof(char) * letters);
if (filename == NULL)
	return (0);
if (buffer == NULL)
	return (0);
i = open(filename, O_RDONLY);
if (i == -1)
	return (0);
r = read(i, buffer, letters);
if (r == -1)
{
	free(buffer);
	close(i);
	return (0);
}
w = write(STDOUT_FILENO, buffer, r);
if (w == -1)
{
free(buffer);
close(i);
return (0);
}
free(buffer);
close(i);
return (r);
}
