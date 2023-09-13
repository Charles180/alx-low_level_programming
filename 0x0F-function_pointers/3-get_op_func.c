#include "3-calc.h"
#include <string.h>
/**
  *get_op_func - selects the correct funtion to perform user operation
  *
  *@s: operation to perform
  *
  *Return: pointer to the correct function
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

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
	}
	return (ops[i].f);
}
