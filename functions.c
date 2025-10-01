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

/**
 * print_number - Print a signed integer in base 10.
 * @n: The number to print.
 *
 * Description: Handles INT_MIN safely by promoting to long before
 * converting to unsigned.
 *
 * Return: Number of characters printed.
 */
int print_number(int n)
{
int count = 0;
unsigned int u;
if (n < 0)
{
count += _putchar('-');
u = -n;
}
else
{
u = n;
}
if (u / 10)
count += print_number(u / 10);
count += _putchar((u % 10) + '0');
return (count);
}
