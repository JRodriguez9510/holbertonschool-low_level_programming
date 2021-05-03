#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initializes a variable
 *@d: Address of the structure
 *@name: name value
 *@age: age value
 *@owner: owner value
 *Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
