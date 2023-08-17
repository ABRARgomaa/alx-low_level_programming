#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;
	int result;

	if (argc != 4)
		return (98);

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	int (*func)(int, int);
	func = get_op_func(operator);

	if (func == NULL)
		return (99);

	result = func(num1, num2);
	return (result);
}

