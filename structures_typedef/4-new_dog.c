#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creates a new dog
 *
 * @name: character
 * @age: float
 * @owner: character
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *name1;
char *owner1;
int i;
int m;
int k;
int j;
dog_t *p;
for (i = 0 ; name[i] != '\0' ; i++)
{
}
for (j = 0 ; owner[j] != '\0' ; j++)
{
}
p = malloc(sizeof(dog_t));
name1 = malloc((i + 1) * sizeof(char));
owner1 = malloc((j + 1) * sizeof(char));
if (p == NULL)
	return (NULL);
if (name1 == NULL || owner1 == NULL)
{
free(p);
free(name1);
free(owner1);
return (NULL);
}
for (m = 0 ; name[m] < i ; m++)
name1[m] = name[m];
for (k = 0 ; owner[k] < j ; k++)
owner1[k] = owner[k];
name1[m] = '\0';
owner1[k] = '\0'; 
p->name = name1;
p->age = age;
p->owner = owner1;
return (p);
}
