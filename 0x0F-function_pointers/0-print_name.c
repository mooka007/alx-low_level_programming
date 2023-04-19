#include "function_pointers.h"

/**
 * print_name - function that writes a name
 * Owned By MoOka
 * @f: a pointer to a function 
 */

void	print_name(char *name, void (*f)(char *))
{
	f(name);
}
