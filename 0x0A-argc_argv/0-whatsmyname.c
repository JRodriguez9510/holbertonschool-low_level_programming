#include <stdio.h>
/**
 *main - has two arguments
 *@argc: Number of aguments
 *@argv: Array with the argument's names
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", *argv);
return (0);
}
