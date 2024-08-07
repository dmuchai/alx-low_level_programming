#include "function_pointers.h"

/**
 * print_name - prints a name using the given function
 * @name: input name
 * @f: function pointer
 *
 * Return: No return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
