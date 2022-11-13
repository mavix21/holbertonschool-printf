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
