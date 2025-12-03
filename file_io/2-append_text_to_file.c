#include "main.h"

/**
 * append_text_to_file - append a text
 *
 * @text_content: character
 * @filename: pointer
 *
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
int l = 0;
int w;
int o;
if (filename == NULL)
	return (-1);
o = open(filename, O_WRONLY | O_APPEND);
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
if (w == -1 || l > w)
{
close(o);
return (-1);
}
close(o);
retuen(1);
}
