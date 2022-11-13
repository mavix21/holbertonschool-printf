#include "main.h"

/**
* _strlen - Returns the length of a given String
* @s: String
*
* Return: Length of the String
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
* _strncpy - Copies the first n bytes of a string pointed to
* by src, including the terminating null byte, to the buffer pointed to by dest
* @src: Pointer to the String we want to copy
* @dest: Pointer to the buffer where src will be allocated
* @n: Number of bytes to be copied from src
*
* Return: Pointer to dest
*/
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	if (n > i)
	{
		for (; i < n; i++)
			dest[i] = '\0';
	}
	else
	{
		/* Adding the terminating null byte */
		dest[i] = '\0';
	}

	return (dest);
}
