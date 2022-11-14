<h1 align ="center">
<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="40%" width="30%">
</h1>

# Printf :page_facing_up:

## Synopsis
A formatted output conversion C program completed as part of the low-level
programming and algorithm track at Holberton School. The program is a pseudo-
recreation of the C standard library function, 'printf'.

## Description
The _printf() function produces output according to a format which is described
below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %%: Prints percent.
+ %d: Prints integers.
+ %i: Prints integers.
+ %x: Print hexadecimals.
+ %X: Print uper case hexadecimal.
+ %b: Print binary.
+ %o: Print unsigned Octal.
+ %u: Print unsigned decimal.
+ %r: Print strings in reverse.
+ %R: Print ROT13.

## Usage
+ All the files are to be compiled on Ubuntu 20.04 LTS
+ Compile your code with "gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c"
+ Include the "main.h" header file on the functions using the _printf()

## Example

```
#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

## Testing
```
$ ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## Authors :black_nib:

* Marcelo Vizcarra <[mavix21](https://github.com/mavix21)>
* José Tirado <[jocalao001](https://github.com/jocalao001)>

## Acknowledgements :pray:

The `_printf` function emulates functionality of the C standard library
function `printf`. This README borrows from the Linux man page
[printf(3)](https://https://man7.org/linux/man-pages/man3/printf.3.html).

This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).

<p align ="center">
<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="20%" width="10%">
</p>
