#include "main.h"

/**
 * store_int - Stores digits of int argument in buffer
 * @args: Argument of type int
 * @buffer: Buffer where the digits, including the minus sign, will be stored
 * @length: Length modifier
 *
 * Return: Nothing
 */
void store_int(va_list args, char *buffer, int length)
{
        char *str_digits; 
        int pos, str_len;

        str_digits = itoa_signed(args, length);
        str_len = _strlen(str_digits);

        for (pos = str_len - 1; pos >= 0; pos--)
                *buffer++ = str_digits[pos];

        free(str_digits);
}

/**
 * store_unsgnd - Stores digits of unsigned int argument in buffer
 * @args: Argument of type unsigned int
 * @buffer: Buffer where the digits will be stored
 * @length: Length modifier
 *
 * Return: Nothing
 */
void store_usgnd(va_list args, char *buffer, int length)
{
        char *str_digits;
        int pos, str_len;
        int base = 10;

        str_digits = itoa_unsigned(args, length, base);
        str_len = _strlen(str_digits);
        
        for (pos = str_len - 1; pos >= 0; pos--)
                *buffer++ = str_digits[pos];

        free(str_digits);
}

