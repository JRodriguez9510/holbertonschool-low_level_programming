#include <stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
  int z, b, y, a;
  for (z = 0 ; z <= 9; z++)
    {
      for (y = z ; y <= 9; y++)
	{
	  for (a = 0; a <= 9; a++)
	    {
	      if (a != y && y != a && a < y)
		{
		  for (b = 0; b <= 9; b++)
		    {
		      if (b != a && a != b && b < a)
			{
	  putchar(48 + y);
	  putchar(48 + a);
	  putchar(48 + b);
	  putchar(44);
	  putchar(32);
			}
		    }
		}
	    }
	}
    }
  putchar(10);
  return (0);
}
