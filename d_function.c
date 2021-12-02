#include "monty.h"

int arr_len(char **arr)
{
	int len = 0;

	while (*(arr + len) != NULL)
		len++;
	
	return (len);
}

int d_function(char **argv, stack_t **stack, __attribute__((unused)) unsigned int line)
{
	int i, n = 10;
	unsigned int val;

	instruction_t instruct[] = {
		{"push", _push},
		{"pop", _pop},
		{"pint", _pint},
		{"pall", _pall},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
	};

	/*printf("Line number = %u\n", line);*/
	for (i = 0; i < n; i++)
	{
		if (strcmp(argv[0], instruct[i].opcode) == 0)
		{

			if (arr_len(argv) == 1)
				val = 0;
			else
				val = (unsigned int) atoi(argv[1]);
			/*printf("val = %u\n",val);*/
			instruct[i].f(stack, val);
			break;
		}

		if (i == n - 1)
		{
			if (strcmp(argv[0], "#") == 0)
			{
				break;
			}
		}
	}
	return (0);
}
