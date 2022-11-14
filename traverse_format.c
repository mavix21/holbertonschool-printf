#include "main.h"

/**
 * traverse_format - Goes through format
 * @format: Format string
 * @args: Argument to be stored
 * @buffer: Buffer in which the characters to be printed will be stored
 *
 * Return: Number of characters to be printed
 */
int traverse_format(const char *format, va_list args, char *buffer)
{
	char *formaters;
	int buffer_len = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(++format) == '\0')
				return (-1);
			formaters = get_formaters(format);
			if (formaters == NULL)
			{
				buffer = check_buffer(buffer, buffer_len++, 1);
				*buffer = '%';
			}
			else
			{
				buffer_len += analize_formaters(formaters, args, buffer);
				format += _strlen(formaters);
				free(formaters);
			}
		}
		else
		{
			buffer = check_buffer(buffer, buffer_len++, 1);
			*buffer = *format++;
		}
		/* Make buffer points to the first null byte */
		for (; *buffer != '\0'; buffer++)
		;
	}
	return (buffer_len);
}
