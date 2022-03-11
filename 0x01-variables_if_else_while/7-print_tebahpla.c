#include <stdio.h>
/**
* main - Programme to print alphabet in lowercase followed by
*         a new line using putchar
*
*Return: always 0
*/
int main(void)
{
/*This is the main function*/
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
}
