#include "main.h"
/**
*_putchar - print a character
*@c: character to print.
*
*Return: 1 for success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
*print_string - print a string
*@str: string to print.
*
*Return: number of characters printed
*/
int print_string(char *str)
{
int i = 0;
if (!str)
str = "(null)";
while (*str)
i += _putchar(*str++);
return (i);
}
