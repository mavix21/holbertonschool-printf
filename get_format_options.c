#include "main.h"

/**
* get_length - Returns the length type according to the length modifier
* @len_mod: Length modifier
*
* Return: Length type
*/
int get_length(char len_mod)
{
	if (len_mod == 'l')
		return (LENGTH_LONG);
	else if (len_mod == 'h')
		return (LENGTH_SHORT);
	else
		return (LENGTH_DEFAULT);
}
