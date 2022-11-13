#include "main.h"

/**
* memset_checked - Allocates memory, checks and fill it out with a given char
* @n_bytes: Number of bytes to be allocated
* @b: Buffer will be filled out with this character
*
* Return: Pointer to the allocated buffer, -1 if malloc fails
*/
char *memset_checked(unsigned int n_bytes, char b)
{
	char *buffer;
	unsigned int i;

	buffer = malloc(n_bytes);

	if (buffer == NULL)
		exit(-1);

	for (i = 0; i < n_bytes; i++)
	buffer[i] = b;

	return (buffer);
}
