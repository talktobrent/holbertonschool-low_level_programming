#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints name using function pointer
* @name: name entered
* @f: name formatting function pointer (all caps, all lowercase, as is, etc.)
* Description: Takes a name, and function pointer that formats
* its output or style, then prints the result
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}









