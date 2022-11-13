#include "main.h"
/**
 * store_Hex - Stores digits of unsigned int argument, in base 16, in buffer
 * Alpha characters will be in uppercase
 * @args: Argument of type unsigned int
 * @buffer: Buffer where the digits in base 16 will be stored
 * @length: Length modifier
 *
 * Return: Nothing
 */
void store_Hex(va_list args, char *buffer, int length)
{
	char *str_digits;
	int pos, str_len;
	int base = 16;

	str_digits = itoa_unsgnd(args, length, base);
	str_len = _strlen(str_digits);
/* Capitalize the letters */
	for (pos = 0; pos < str_len; pos++)
	{
		if (str_digits[pos] >= 97 && str_digits[pos] <= 122)
			str_digits[pos] -= 32;
	}

	for (pos = str_len - 1; pos >= 0; pos--)
		*buffer++ = str_digits[pos];
	free(str_digits);
}
