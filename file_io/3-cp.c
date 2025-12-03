#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @ac: integer
 * @av: pointer
 *
 * Return: integer
 */
int main(int ac, char **av)
{
int o, oo, r, w;
char buffer[1024];
if (ac != 3)
{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }
o = open(av[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98); }
oo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (oo == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99); }
r = read(o, buffer, 1024);
while (r > 0)
{
w = write(oo, buffer, r);
if (w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99); }
r = read(o, buffer, 1024); }
if (r == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
if (close(o) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o), exit(100);
if (close(oo) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", oo), exit(100);
return (0);
}
