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

	if (buffer_length >= 1024)
		buffer_length -= 1023;

	if ((buffer_length + n) >= 1024)
	{
		buffer -= buffer_length;
		print_buffer(buffer, buffer_length);
		new_buffer = _calloc(1024, sizeof(char));
		return (new_buffer);
	}

	return (buffer);
}
