#include <stdio.h>
/**
*main - program print the possible combination of single numbers
*
*
*Return: always 0
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
