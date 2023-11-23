#include "3-calc.h"

/**
* get_op_func - Function pointer that calls
*	function pointer in the structure
* @s: placeholder that determines function call to be made by op_t arrOp[]
* Return: function returned by int (*f)(int a, int b)
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t arrOp[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (arrOp[i].op != NULL && *(arrOp[i].op) != *s)
		i++;

	return (arrOp[i].f);

}




