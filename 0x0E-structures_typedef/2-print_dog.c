#include <stdio.h>
#include "dog.h"
/**
 *print_dog - initializes a variable
 *@d: Address of the structure
 *Return: Void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
}
