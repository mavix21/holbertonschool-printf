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
	write(1, buffer, buffer_length);
	free(buffer);
}
