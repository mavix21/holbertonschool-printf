#include "main.h"

/**
  * check_buffer - Checks if buffer has reached its maximum length
  * @buffer: Buffer to be checked
  * @buffer_length: Current buffer_length
  * @n: Number of extra memory requiered
  *
  * Return: If reached maximum, return a new buffer
  */
char *check_buffer(char *buffer, int buffer_length, int n)
{
	char *new_buffer;

	if ((buffer_length + n) >= 1023)
	{
		print_buffer(buffer - 1023, 1023);
		new_buffer = memset_checked(1024 * sizeof(char), '\0');
		return (new_buffer);
	}

	return (buffer);
}
