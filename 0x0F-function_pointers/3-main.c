#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to test get_op_func
 * @argc: size of the arg  entered in cmd line
 * @argv: argument entered
 *
 * Return: Always (0) sucess
 */
int main(int argc, char *argv[])
{
	int res, a, b;
	char *opt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opt = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);


	if (get_op_func(opt) == NULL || opt[1]  != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*opt == '/' && b == 0) || (*opt == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(opt)(a, b);
	printf("%d\n", res);

return (0);
}
