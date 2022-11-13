#include "main.h"

/**
 * store_c - Stores character in buffer
 * @args: Argument of type character
 * @buffer: Buffer where the character will be stored
 *
 * Return: Nothing
 */
void store_c(va_list args, char *buffer)
{
        *buffer = va_arg(args, int);
}

/**
 * store_str - Stores string in buffer
 * @args: Argument of type string
 * @buffer: Buffer where the string will be stored
 *
 * Return: Nothing
 */
void store_str(va_list args, char *buffer)
{
        char *str;

        str = va_arg(args, char *);

        if (str == NULL)
        {
                str = "(null)";
        }

        for (; *str != '\0'; str++)
        {
                *buffer = *str;
                buffer++;
        }
}
