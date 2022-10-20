#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
<<<<<<< HEAD
	op_t key[]={{"+",op_add},{"-",op_sub},{"*",op_mul},{"/",op_div},{"%",op_mod}};
=======
	op_t ops[] = {
		 {"+", op_add},
		 {"-", op_sub},
		 {"*", op_mul},
		 {"/", op_div},
		 {"%", op_mod},
		 {NULL, NULL}};
>>>>>>> 7d61b25ea87bf03edbc2bcee667d3b1d9f1328fb
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
