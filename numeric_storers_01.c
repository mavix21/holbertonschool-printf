#include "main.h"

/**
 * store_int - Stores digits of int argument in buffer
 * @args: Argument of type int
 * @buffer: Buffer where the digits, including the minus sign, will be stored
 * @length: Length modifier
 *
 * Return: Number of digits stored
 */
int store_int(va_list args, char *buffer, int length)
{
	char *str_digits;
	int pos, str_len;

	str_digits = itoa_sgnd(args, length);
	str_len = _strlen(str_digits);

	for (pos = str_len - 1; pos >= 0; pos--)
		*buffer++ = str_digits[pos];

	free(str_digits);

	return (str_len);
}

/**
 * store_unsgnd - Stores digits of unsigned int argument in buffer
 * @args: Argument of type unsigned int
 * @buffer: Buffer where the digits will be stored
 * @length: Length modifier
 *
 * Return: Number of digits stored
 */

int store_unsgnd(va_list args, char *buffer, int length)
{
	char *str_digits;
	int pos, str_len;
	int base = 10;

	str_digits = itoa_unsgnd(args, length, base);
	str_len = _strlen(str_digits);

	for (pos = str_len - 1; pos >= 0; pos--)
		*buffer++ = str_digits[pos];

	free(str_digits);

	return (str_len);
}

/**
 * store_bin - Stores digits of unsigned int argument, in base 2, in buffer
 * @args: Argument of type unsgnd int
 * @buffer: Buffer where the digits in base 2 will be stored
 * @length: Length modifier
 *
 * Return: Number of digits stored
 */
int store_bin(va_list args, char *buffer, int length)
{
	char *str_digits;
	int pos, str_len;
	int base = 2;

	str_digits = itoa_unsgnd(args, length, base);
	str_len = _strlen(str_digits);

	for (pos = str_len - 1; pos >= 0; pos--)
		*buffer++ = str_digits[pos];

	free(str_digits);

	return (str_len);
}

/**
 * store_octal - Stores digits of unsigned int argument, in base 8, in buffer
 * @args: Argument of type unsigned int
 * @buffer: Buffer where the digits in base 8 will be stored
 * @length: Length modifier
 *
 * Return: Number of digits stored
 */
int store_octal(va_list args, char *buffer, int length)
{
	char *str_digits;
	int pos, str_len;
	int base = 8;

	str_digits = itoa_unsgnd(args, length, base);
	str_len = _strlen(str_digits);

	for (pos = str_len - 1; pos >= 0; pos--)
		*buffer++ = str_digits[pos];

	free(str_digits);

	return (str_len);
}

/**
 * store_hex - Stores digits of unsigned int argument, in base 16, in buffer
 * @args: Argument of type unsigned int
 * @buffer: Buffer where the digits in base 16 will be stored
 * @length: Length modifier
 *
 * Return: Number of digits stored
 */
int store_hex(va_list args, char *buffer, int length)
{
	char *str_digits;
	int pos, str_len;
	int base = 16;

	str_digits = itoa_unsgnd(args, length, base);
	str_len = _strlen(str_digits);

	for (pos = str_len - 1; pos >= 0; pos--)
		*buffer++ = str_digits[pos];

	free(str_digits);

	return (str_len);
}
