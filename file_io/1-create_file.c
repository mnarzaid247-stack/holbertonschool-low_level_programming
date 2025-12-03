#include "main.h"

/**
 * create_file - creating a file
 *
 * @filename: pointer
 * @text_content: character
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
size_t l = 0;
int o;
size_t w;
if (filename == NULL)
	return (-1);
o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (o == -1)
	return (-1);
if (text_content == NULL)
{
close(o);
return (1);
}
while (text_content[l] != '\0')
l++;
w = write(o, text_content, l);
if (w == -1 || w < l)
{
close(o);
return (-1);
}
close(o);
return (1);
}
