#include "holberton.h"
#include <stdio.h>

/**
* set_string - sets value of pointer to a char
* @s: pointer to change
* @to: change to this
* Description: pointer points to new address
*/

void set_string(char **s, char *to)
{
	*s = to;
}

