#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
int l, i;
char *s;
if (str == NULL)
return (0);
l = 0;
while (*(str + l))
l++;
s = malloc(sizeof(char) * l + 1);
if (s == 0)
return (0);
for (i = 0; i <= l; i++)
{
*(s + i) = *(str + i);
}
return (s);
}
/**
 *new_dog - new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Return: dot_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
 
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
 
my_dog->name = _strdup(name);
if (my_dog->name == 0)
{
free(my_dog->name);
free(my_dog);
return (0);
}
 
my_dog->age = age;
 
my_dog->owner = _strdup(owner);
if (my_dog->owner == 0)
{
free(my_dog->owner);
free(my_dog);
return (0);
}
return (my_dog);
}
