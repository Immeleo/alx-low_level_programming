#include <stdio.h>
/*Programme to print alphabet in lowercase followed by new line using putchar*/
int main(void)
{
/*This is the main function*/
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
