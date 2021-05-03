#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_memcpy - copies string length
 *@dest: string to change
 *@src: string to add
 *@n: number of items in the secont string
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
  int m;
  if (argc != 2)
    {
      printf("Error");
      exit (98);
    }
  if (isdigit(argv[0][1]) == 0 || isdigit(argv[0][2]) == 0)
    {
      printf("Error");
      exit (98);
    }
  m = (argv[0][1] * argv[0][2]);
  return (m);
}
