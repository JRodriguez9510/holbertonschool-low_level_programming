#include "holberton.h"
/**
 *reverse_array - Reverses the cointent of an array
 *@a: given pointer
 *@n: numbers of elments in the array
 *Return: no return
 */
void reverse_array(int *a, int n)
{
int j, l;
int tmp;
j = 0;
l = n / 2;
n = n - 1;
while (n  >= l)
{
tmp = a[j];
a[j] = a[n];
a[n] = tmp;
n--;
j++;
}
}
