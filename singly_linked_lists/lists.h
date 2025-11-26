#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

int _putchar(char c);
size_t print_list(const list_t *h);

typedef struct list_s 
{
char *str;
int len;
struct list_s *next;
} list_t;

#endif
