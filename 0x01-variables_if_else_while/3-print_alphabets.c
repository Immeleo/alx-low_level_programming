#include <stdio.h>
/**
*main-programme to print alphabet in lower and upper case followed by new line
*
*Return: always 0
*/
int main(void)
{
int ch;
/*print lowercase alphabets*/
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
/*print uppercase characters*/
for (ch = 'A';  ch <= 'Z'; ch++)
{
putchar(ch);
}
/*Print new line*/
putchar('\n');
return (0);
}
