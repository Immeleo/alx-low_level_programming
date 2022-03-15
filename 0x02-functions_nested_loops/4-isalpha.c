#include "main.h"
/**
* _isalpha - write a function that checks for lowercase or uppercase character.
* @c: The character to check
*
* Return: 1 if the character is lowercase. 0 otherwise
*/
int _isalpha(int c)
{
if ((c < 'z' && c < 'Z') || (c > 'a' && c > 'A'))
return (1);
else
return (0);
}
