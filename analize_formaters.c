#include "main.h"

/**
 * analize_formaters - Get information about the optional specifiers
 * and passes them to the storer_arg function
 * @formaters: Specifier string
 * @args: Variadic argument
 * @buffer: Buffer where the argument will be stored
 *
 * Return: Nothing
 */
void analize_formaters(char *formaters, va_list args, char *buffer)
{
	int formaters_len, length = 0;
	char specifier;
	get_c c_st[] = {
		{'c', store_c},
		{'s', store_str},
		{'%', store_perc},
		{'r', store_rev},
		{'\0', NULL},
	};
	get_n n_st[] = {
		{'d', store_int},
		{'i', store_int},
		{'u', store_unsgnd},
		{'b', store_bin},
		{'o', store_octal},
		{'x', store_hex},
		{'X', store_Hex},
		{'\0', NULL},
	};

	formaters_len = _strlen(formaters);

	/* If there are more of 1 formaters, search for length modifier */
	if (formaters_len > 1)
	{
		length = get_length(formaters[formaters_len - 2]);
	}

	/* Get conversion specifier */
	specifier = formaters[formaters_len - 1];

	/* Call the argument storer with the proper formatting directives */
	store_arg(specifier, args, c_st, n_st, buffer, length);
}
