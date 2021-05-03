#include <stdio.h>
/**
 *main - has two arguments
 *@argc: Number of aguments
 *@argv: Array with the argument's names
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
  int i = 0;
  for (i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  return (0);
}
