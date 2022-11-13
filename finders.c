#include "main.h"

/**
 * pos_first_ltr_or_perc - Finds the position of either the first alpha
 * character or percent sign, if any, in a given format string.
 * @format: Format string
 *
 * Return:
 *        Position of the first alpha character or percent sign
 *        -1 otherwise
 */
int pos_first_ltr_or_perc(const char *format)
{
	int i;

	for (i = 0; format[i]; i++)
	{
		if (_isalpha(format[i]) || format[i] == '%')
			return (i);
	}

	return (-1);
}
