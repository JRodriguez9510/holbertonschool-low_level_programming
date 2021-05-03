#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates arguments
 * @ac: Numbers of arguments.
 * @av: String of a argument.
 * Return: always void.
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, j;
int k = 0;
int m_total = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != 0; j++)
{
continue;
}
m_total += j;
}
s = malloc(sizeof(char) * (m_total + ac + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
return (s);
}
