#include "main.h"

/**
 * store_arg - Calls the corresponding conversion function
 * according to the conversion specifier
 * @s: Conversion specifier
 * @arg: Argument to be stored
 * @c_st: Array of objects containing all the valid character conversion
 * specifier and their corresponding conversion function
 * @n_st: Array of objects containing all the valid numeric conversion
 * specifier and their corresponding conversion function
 * @b: Buffer where the argument will be stored
 * @l: Length modifier
 *
 * Return: Number of characters of the argument to be stored
 */

int store_arg(char s, va_list arg, get_c c_st[], get_n n_st[], char *b, int l)
{
	int i, j, arg_length;

	for (i = 0; c_st[i].specifier != '\0'; i++)
	{
		if (s == c_st[i].specifier)
		{
			arg_length = c_st[i].f(arg, b);
			return (arg_length);
		}
	}

	for (j = 0; n_st[j].specifier != '\0'; j++)
	{
		if (s == n_st[j].specifier)
		{
			arg_length = n_st[j].f(arg, b, l);
			return (arg_length);
		}
	}

	*b = '%';
	*(b + 1) = s;
	return (2);
}
