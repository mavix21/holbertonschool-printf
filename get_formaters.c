#include "main.h"

/**
 * get_formaters - Extract the formaters (flags, field width, precision
 * length modifier and conversion specifier), if any, from the format string
 * @format: Format string
 *
 * Return:
 *        Pointer to string containing all the formaters
 *        NULL otherwise
 */
char *get_formaters(const char *format)
{
        int pos;
        char *formaters;

        /* Gets the position of the first letter or percent sign */
        pos = pos_first_ltr_or_perc(format);
        if (pos < 0)
                return NULL;

        if (is_specificator(format[pos]))
        {
                formaters = malloc((pos + 2) * sizeof(char));
                formaters = _strncpy(formaters, format, pos + 1);
                return (formaters);
        }

        if (format[pos] == 'l' || format[pos] == 'h')
        {
                if (is_specificator(format[pos + 1]))
                {
                        formaters = malloc((pos + 3) * sizeof(char));
                        formaters = _strncpy(formaters, format, pos + 2);
                        return (formaters);
                }
                return (NULL);
        }

        return (NULL);
}
