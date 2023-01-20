#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select the valid function to pass
 * @s: character operator
 * Return: pointerto functionthat corresponds to the operator
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

	int i = 0;

	while (i < 10)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
