/****************************************************
 * Project: Custom _printf
 * Repo   : holbertonschool-printf
 * Authors: Sondos Alrubaish & Abdullah Alsalem
 *
 * A custom implementation of the standard printf 
 * function built in C without using the standard I/O 
 * formatting engine. 
 ****************************************************/

/* ========= Function Prototype ========= */

int _printf(const char *format, ...);
/*
 * @format → String with text and format specifiers
 * @...    → Variable arguments
 *
 * Return  → Number of characters printed
 *           (excluding the '\0')
 */


/* ========= Supported Specifiers ========= */
/*
%c   → Print a single character
%s   → Print a string
%%   → Print a literal '%'
%d   → Print signed decimal integer
%i   → Print signed decimal integer
%u   → Print unsigned integer
%o   → Print unsigned octal
%x   → Print unsigned hexadecimal (lowercase)
%X   → Print unsigned hexadecimal (UPPERCASE)
%b   → Print binary representation
%p   → Print pointer address
%r   → Print reversed string
%R   → Print string in ROT13
%S   → Print string with non-printable chars as \xXX
*/


/* ========= Usage Examples ========= */
/*
_printf("Hello, %s!\n", "world");
→ Hello, world!

_printf("Character: %c\n", 'H');
→ Character: H

_printf("Number: %d\n", 1024);
→ Number: 1024

_printf("Binary: %b\n", 98);
→ Binary: 1100010

_printf("Pointer: %p\n", (void *)addr);
→ Pointer: 0x7ffe...
*/


/* ========= Compilation ========= */
/*
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf
*/


/* ========= Project Structure ========= */
/*
holbertonschool-printf/
│
├── _printf.c        # Core function
├── functions.c      # %c, %s, %, %d, %i
├── print_numbers.c  # %u, %o
├── print_hex.c      # %x, %X
├── print_binary.c   # %b
├── print_pointer.c  # %p
├── print_custom.c   # %r, %R, %S
├── _putchar.c       # write() wrapper
├── main.h           # Header file
├── man_3_printf     # Manual page
└── README.md        # Documentation
*/


/* ========= Requirements ========= */
/*
- No global variables
- Maximum 5 functions per file
- Betty style compliance

Allowed functions:
- write
- malloc / free
- va_start, va_end, va_copy, va_arg
*/


/* ========= Man Page ========= */
/*
$ man ./man_3_printf
*/


/* ========= Authors ========= */
/*
Sondos Alrubaish
Abdullah Alsalem
*/

