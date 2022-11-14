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
 * store_perc - Stores a percent character in buffer
 * @args: Argument of type character
 * @buffer: Buffer where the character will be stored
 *
 * Return: Nothing
 */
void store_perc(va_list args, char *buffer)
{
	(void)args;
	*buffer = '%';
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

/**
 * store_rev - Stores string in reverse order
 * @args: Argument of type string
 * @buffer: Buffer where the string will be stored
 *
 * Return: Nothing
 */
void store_rev(va_list args, char *buffer)
{
	char *str;
	char *str_rev;
	int str_len, i, j;

	str = va_arg(args, char *);
	str_len = _strlen(str);
	str_rev = malloc((str_len + 1) * sizeof(char));
	for (i = str_len - 1, j = 0; i >= 0; j++, i--)
	{
		str_rev[j] = str[i];
	}
	str_rev[j] = '\0';
	for (i = 0; str_rev[i] != '\0'; i++)
	{
		*buffer = str_rev[i];
		buffer++;
	}
	free(str_rev);
}
