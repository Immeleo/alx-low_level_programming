#include <stdio.h>
/**
*main-Programme to print alphabet in lowercase followed by
*     new line using putchar
*
*Return: always 0
*/
int main(void)
{
/*This is the main function*/
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
}
