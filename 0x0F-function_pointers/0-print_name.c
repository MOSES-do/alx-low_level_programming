#include "function_pointers.h"

/**
* print_name - function to callback other functions
* @name: name of person passed to callback function
* @f: function pointer
*/


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
