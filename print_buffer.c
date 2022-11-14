#include "main.h"

/**
 * print_buffer - Prints the buffer to standard output
 * @buffer: Buffer
 * @buffer_length: Number of bytes to be printed
 *
 * Return: Nothing
 */
void print_buffer(char *buffer, int buffer_length)
{
	if (buffer_length >= 1024)
		buffer_length -= 1023;

	write(1, buffer, buffer_length);
	free(buffer);
}
