Custom _printf Function


A lightweight re-implementation of the C standard printf function.
Built with C, without relying on the standard I/O library formatting engine.

📖 Overview

The _printf project is a Holberton group project designed to challenge our understanding of:

1.	Variadic functions (stdarg.h)
2.	Format string parsing
3.	System calls (write) for output
4.	Memory management & helper utilities
5.	Team collaboration, Git & Betty style compliance

This function mimics printf while focusing on a selected set of format specifiers.

🔧 Function Prototype

int _printf(const char *format, ...);


@format → String containing text & format specifiers

... → Variable arguments to match specifiers

Return value → Number of characters printed (excluding the \0)

🎯 Features & Supported Specifiers

Specifier	Description	Example
%c	Print a single character	_printf("%c", 'H'); → H
%s	Print a string	_printf("%s", "Hello"); → Hello
%%	Print a literal %	_printf("%%"); → %
%d	Print a signed integer (base 10)	_printf("%d", 98); → 98
%i	Print a signed integer (base 10)	_printf("%i", -1024); → -1024

💡 More advanced conversions (%u, %o, %x, %X, %p) can be extended later.

🚀 Examples

_printf("Hello, %s!\n", "world");
/* Output: Hello, world! */

_printf("Character: %c\n", 'H');
/* Output: Character: H */

_printf("Percent: %%\n");
/* Output: Percent: % */

_printf("Number: %d\n", 1024);
/* Output: Number: 1024 */

⚙️ Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


📂 Project Structure

holbertonschool-printf/
│
├── _printf.c        # Core function
├── functions.c      # Handles %c, %s, %% ,%d, %i
├── main.h           # Header file (prototypes, structs)
├── man_3_printf     # Manual page
└── README.md        # Documentation

📜 Man Page

Custom man page is included:
man ./man_3_printf

It documents:
Usage
Options
Return values
Examples

✅ Requirements

⦁	GCC flags: -Wall -Werror -Wextra -pedantic -std=gnu89
⦁	No global variables
⦁	≤ 5 functions per file
⦁	Betty style compliance

Allowed functions:
⦁	write
⦁	malloc / free
⦁	va_start, va_end, va_copy, va_arg


Authors

Made with 💡, 🖥️, and ☕ by:
⦁	Sondos Alrubaish
⦁	Abdullah Alsalem
