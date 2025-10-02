#include "main.h"
/**
 * print_decimal - Print an unsigned int as decimal (base 10).
 * @n: The number to print.
 *
 * Description: Prints decimal; for n == 0 prints "0".
 *
 * Return: Number of characters printed.
 */
int print_decimal(unsigned int n)
{
int count = 0;
if (n == 0)
return(_putchar('0'));
if (n >= 10)
count +=  print_decimal(n/10);
count += _putchar((n % 10)+ '0');
return(count);
}

/**
| * print_octal - Print an unsigned int as octal (base 8).
| * @n: The number to print.
| *
| * Description: Prints octal; for n == 0 prints "0".
| *
| * Return: Number of characters printed.
| */
int print_octal(unsigned int n)
{
int count = 0;
if (n == 0)
return(_putchar('0'));
if (n >= 8)
count += print_octal(n/8);
count += _putchar((n % 8)+ '0');
return(count);
}
/**
| * print_hexlow - Print an unsigned int as lowhex (base 16).
| * @n: The number to print.
| *
| * Description: Prints hexlow; for n == 0 prints "0".
| *
| * Return: Number of characters printed.
| */
int print_hexlow(unsigned int n)
{
int count = 0;
char hex[] = "0123456789abcdef";
if (n == 0)
return(_putchar('0'));
if (n >= 16)
count += print_hexlow(n/16);
count += _putchar(hex[n % 16]);
return(count);
}
/**
| * print_hexup - Print an unsigned int as uphex (base 16).
| * @n: The number to print.
| 
| * Description: Prints hexup; for n == 0 prints "0".
| *
| * Return: Number of characters printed.
| */

int print_hexup(unsigned int n)
{
int count = 0;
char hex[] = "0123456789ABCDEF";
if (n == 0)
return(_putchar('0'));
if (n >= 16)
count += print_hexup(n/16);
count += _putchar(hex[n % 16]);
return(count);
}
