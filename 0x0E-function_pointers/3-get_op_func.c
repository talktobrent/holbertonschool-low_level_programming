#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
* get_op_func - selects correct math function asked by user
* @s: math operator passed
* Return: function in struct, or zero if fail
*/

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

int i;

i = 0;

while (i < 5)
{
	if (strcmp(ops[i].op, s) == 0)
	{
		return (ops[i].f);
	}
i++;
}
return (0);
}


