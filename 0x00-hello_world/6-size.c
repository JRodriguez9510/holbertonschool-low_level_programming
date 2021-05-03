#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int inttype;
char chartype;
long int longint;
long long int longlongint;
float floattype;
printf("Size of a char: %ld byte(s)\n", sizeof(chartype));
printf("Size of an int: %ld byte(s)\n", sizeof(inttype));
printf("Size of a long int: %ld byte(s)\n", sizeof(longint));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongint));
printf("Size of a float: %ld byte(s)\n", sizeof(floattype));
return (0);
}
