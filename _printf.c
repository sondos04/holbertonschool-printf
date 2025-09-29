#include "main.h"

int _printf(const char *format, ...)
{
va_list arg;
int i = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start (args,format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return (-1);
if (*format == 'c')
i += _putchar(va_arg(arg , int));
else if (*format == 's')
i += print_string(va_arg(arg , char*));
else if (*format == '%')
i += _putchar('%');
else
i += _putchar('%');
i += _putchar(*format);
}
else
i += _putchar(*format);
format++;
}
va_end (args);
return (i);
}
