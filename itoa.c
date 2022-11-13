#include "main.h"

/**
 * itoa_signed - Converts an integer into a character string
 * @args: Argument of type int
 * @length: Length modifier
 *
 * Return: Pointer to character string
 */
char *itoa_signed(va_list args, int length)
{
	int rem, number, number_sign = 1, pos = 0;
	long int number_l;
	char *str_digits = malloc(12 * sizeof(char));

	if (length == LENGTH_DEFAULT || length == LENGTH_SHORT)
	{
		number = va_arg(args, int);
		if (number < 0)
			number_sign = -1;
		number_l = (long int)number;
	}
	else if (length == LENGTH_LONG)
	{
		number_l = va_arg(args, long int);
		if (number_l < 0)
			number_sign = -1;
	}

	do {
		rem = number_l % 10;
		rem *= number_sign;
		str_digits[pos++] = rem + '0';
		number_l /= 10;
	} while (number_sign * number_l > 0);

	if (number_sign < 0)
		str_digits[pos++] = '-';

	str_digits[pos] = '\0';
	return (str_digits);
}

/**
 * itoa_unsigned - Converts an unsigned integer into a character string
 * @args: Argument of type unsigned int
 * @length: Length modifier
 * @base: The unsigned int will be converted to this base
 *
 * Return: Pointer to character string
 */
char *itoa_unsigned(va_list args, int length, int base)
{
	int rem, pos = 0;
	unsigned int number_u;
	unsigned long int number_lu;
	char hex_digits[] = "0123456789abcdef";
	char *str_digits = malloc(32 * sizeof(char));

	if (length == LENGTH_DEFAULT || length == LENGTH_SHORT)
	{
		number_u = va_arg(args, unsigned int);
		number_lu = (unsigned long int)number_u;
	}
	else if (length == LENGTH_LONG)
	{
		number_lu = va_arg(args, unsigned long int);
	}

	do {
		rem = number_lu % 10;
		str_digits[pos++] = rem + '0';
		number_lu /= 10;
	} while (number_lu > 0);

	str_digits[pos] = '\0';
	return (str_digits);
}
