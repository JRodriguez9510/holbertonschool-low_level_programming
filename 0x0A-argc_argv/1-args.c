#include <stdio.h>
/**
 *main - has two arguments
 *@argc: Number of aguments
 *@argv: Array with the argument's names
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", --argc);
return (0);
}
