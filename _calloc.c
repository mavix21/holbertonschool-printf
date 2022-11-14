#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc, if possible
 * @nmemb: Number of elements of the array
 * @size: Number of bytes of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		exit(-1);

	for (i = 0; i < (nmemb * size); i++)
		*((char *)buffer + i) = 0;

	return (buffer);
}
