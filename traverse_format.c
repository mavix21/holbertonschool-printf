#include "main.h"

/**
 * traverse_format - Goes through format
 * @format: Format string
 * @arg: Argument to be stored
 * @buffer: Buffer in which the characters to be printed will be stored
 *
 * Return: Number of characters to be printed
 */
int traverse_format(const char *format, va_list args, char *buffer)
{
	char *formaters;
	int buffer_length = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(++format) == '\0')
			{
				return (-1);
			}
			formaters = get_formaters(format);
			if (formaters == NULL)
			{
				*buffer = '%';
				buffer_length++;
			}
			else
			{
				buffer_length += analize_formaters(formaters, args, buffer);
				format += _strlen(formaters);
				free(formaters);
			}
		}
		else
		{
			*buffer = *format++;
			buffer_length++;
		}
		/* Make buffer points to the first null byte */
		for (; *buffer != '\0'; buffer++)
		;
	}
	return (buffer_length);
}
