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

/**
 * print_binary - Print an unsigned int as binary (base 2).
 * @n: The number to print.
 *
 * Description: Prints without leading zeros; for n == 0 prints "0".
 *
 * Return: Number of characters printed.
 */
int print_binary(unsigned int n)
{
	int i = 0;

	if (n > 1)
		i += print_binary(n >> 1);

	i += _putchar((n & 1) + '0');
	return (i);
}

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
{
count +=  print_decimal(n/10);
count += _putchar((n%10)+ '0');
}
return(count);
}

/**
 * print_octal - Print an unsigned int as octal (base 8).
 * @n: The number to print.
 *
 * Description: Prints octal; for n == 0 prints "0".
 *
 * Return: Number of characters printed.
 */
int print_octal(unsigned int n)
{
int count = 0;
if (n == 0)
return(_putchar('0'));
if (n >= 8)
{
count += print_octal(n/8);
count += _putchar((n%8)+ '0');
}
return(count);
}

/**
 * print_hexlow - Print an unsigned int as lowhex (base 16).
 * @n: The number to print.
 *
 * Description: Prints hexlow; for n == 0 prints "0".
 *
 * Return: Number of characters printed.
 */
int print_hexlow(unsigned int n)
{
int count = 0;
char hex[] = "0123456789abcdef";
if (n == 0)
return(_putchar('0'));
if (n >= 16)
{
count += print_hexlow(n/16);
count += _putchar(hex[n%16]);
}
return(count);
}

/**
 * print_hexup - Print an unsigned int as uphex (base 16).
 * @n: The number to print.
 *
 * Description: Prints hexup; for n == 0 prints "0".
 *
 * Return: Number of characters printed.
 */

int print_hexup(unsigned int n)
{
int count = 0;
char hex[] = "0123456789ABCDEF";
if (n == 0)
return(_putchar('0'));
if (n >= 16)
{
count += print_hexup(n/16);
count += _putchar(hex[n%16]);
}
return(count);
}
