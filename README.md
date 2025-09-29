# C- printf

### Description

------------


A re-implementation of the C standard printf function.
Built with pure C, without relying on the standard I/O library formatting engine.

```` c
int printf ( const char * format, ... );
````

### Overview

------------


The _printf project is a Holberton group project designed to challenge our understanding of:

Variadic functions (stdarg.h)

Format string parsing

System calls (write) for output

Memory management & helper utilities

Team collaboration, Git & Betty style compliance

This function mimics printf while focusing on a selected set of format specifiers.

------------
### PROTOTYPE


_printf - Produces output according to a format.
@format: A string containing characters and format specifiers.
@...:    Variable arguments corresponding to the format specifiers.

Description: 
      Mimics the behavior of the standard printf function.
      Supported specifiers: %c, %s, %%, %d, %i, and optionally others
      The function parses the format string, retrieves the arguments 
      from the variable argument list, formats them, and writes 
      the output to standard output (stdout).
 
Return: 
     On success, the total number of characters printed (excluding '\0').
     On error, a negative value is returned.
 
int _printf(const char *format, ...);


------------
### Features & Supported Specifiers

 Specifier | Output | Example
------------ | ------------- |-----------
 %c | Character | A
 %s | String of characters | Hello
 %% | Print a literal % | %
  %i and %d | Signed integer (base 10) | 100 


------------

#### Project Structure


------------

|Name            |Information                    |             
|----------------|-------------------------------|
|`man_3_printf`|Man page of the _printf() function.|
|`_printf.c`|Main printf function file, Calls other functions.|
|`functions.c` | contains the helper functions that handle specific format specifiers for the custom _printf function. |
|`main.h` | header file, contains all function prototypes. | 
|`README.md` | Documentation for the project. |

------------
#### Requirements


------------

⦁	All files compiled on Ubuntu 22.04 LTS

⦁	GCC flags: -Wall -Werror -Wextra -pedantic -std=gnu89

⦁	No global variables

⦁	≤ 5 functions per file

⦁	Betty style compliance




#### Allowed functions:

------------

````c
write, malloc, free, va_start, va_end, va_copy, va_arg




#### Compilation

------------

- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf`.




#### MAN PAGE

------------

View for more info:

```
man ./man_3_printf
```



#### BUGS/ISSUES

------------

- No known bugs at the moment. Please report for any bugs or issues.



#### MORE INFO

------------

`man_3_printf`


#### AUTHORS

------------

- Sondos Alrubaish      - Abdullah Alsalem
