#include "function_pointers.h"

/**
 * print_name - function that writes a name
 * Owned By MoOka
 * @f: a pointer to a function
 * @name: a pointer to a null-terminated string containing a name
 */

void	print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
