#include "main.h"

/**
  * _printf - Produces output according to a given format
  * @format: Format string
  *
  * Return: Number of characters printed
  */
int _printf(const char *format, ...)
{
	int number_of_char_printed;
	va_list args;

	/* Set a local buffer of 1024 chars and fill it out with nulls */
	char *buffer = _calloc(1024, sizeof(char));

	/* Validate format */
	if (format == NULL)
		return (-1);

	va_start(args, format);

	/* Start traversing the format string */
	number_of_char_printed = traverse_format(format, args, buffer);

	va_end(args);

	if (number_of_char_printed >= 0)
	{
		print_buffer(buffer, number_of_char_printed);
	}
	else
	{
		print_buffer(buffer, _strlen(buffer));
	}

	return (number_of_char_printed);
}
