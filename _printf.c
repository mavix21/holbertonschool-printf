#include "main.h"

/**
  * _printf - Produces output according to a given format
  * @format: Format string
  *
  * Return: Number of characters printed
  */
int _printf(const char *format, ...)
{
	char *formaters;
	unsigned int number_of_char_printed = 0;
	va_list args;

	/* Set a local buffer of 1024 chars and fill it out with nulls */
	char *buffer = memset_checked(1024 * sizeof(char), '\0');

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			formaters = get_formaters(++format);
			/*
			 * If no valid ending conversion specifier is
			 * encountered, print '%' and continue
			 */
			if (formaters == NULL)
			{
				*buffer = '%';
			}
			else
			{
				analize_formaters(formaters, args, buffer);
				format += _strlen(formaters);
				free(formaters);
			}
		}
		else
		{
			*buffer = *format++;
		}
		/* Make buffer points to the first null byte */
		for (; *buffer != '\0'; buffer++, number_of_char_printed++)
		;
	}
	va_end(args);
	buffer -= number_of_char_printed;
	print_buffer(buffer, number_of_char_printed);
	return (number_of_char_printed);
}
