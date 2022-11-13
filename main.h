#ifndef PRINTF_H
#define PRINTF_H

/* Standard Libraries */
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* Macros for length options*/
#define LENGTH_DEFAULT 0
#define LENGTH_SHORT 1
#define LENGTH_LONG 2

/**
 * struct character_converters - Matches character conversion specifier with
 * corresponding converter function
 * @specifier: Character conversion specifier
 * @f: Pointer to converter function
 */
typedef struct character_converters
{
	char specifier;
	void (*f)(va_list, char *);
} get_c;

/**
 * struct numeric_converters - Matches numeric conversion specifier with
 * corresponding converter function
 * @specifier: Numberic conversion specifier
 * @f: Pointer to converter function
 */
typedef struct numeric_specifiers
{
	char specifier;
	void (*f)(va_list, char *, int);
} get_n;

/* Main Printf Function */
int _printf(const char *, ...);

/* String functions */
int _strlen(char *);
char *_strncpy(char *, const char *, int);

/* Finders */
int pos_first_ltr_or_perc(const char *format);

/* Comparators */
int is_specifier(char c);
int _isalpha(int);

char *memset_checked(unsigned int, char);
void print_buffer(char *, unsigned int);
int get_length(char);
char *get_formaters(const char *);
void analize_formaters(char *, va_list, char *);
char *itoa_sgnd(va_list, int);
char *itoa_unsgnd(va_list, int, int);

/* Storing functions */
void store_arg(char, va_list, get_c c_st[], get_n n_st[], char *, int);
void store_c(va_list, char *);
void store_str(va_list, char *);
void store_Str(va_list, char *);
void store_rev(va_list, char *);
void store_rot13(va_list, char *);
void store_int(va_list, char *, int);
void store_bin(va_list, char *, int);
void store_octal(va_list, char *, int);
void store_unsgnd(va_list, char *, int);
void store_hex(va_list, char *, int);
void store_Hex(va_list, char *, int);

#endif /* End of PRINTF_H */
