#include "monty.h"

int d_function(char **argv, stack_t **stack)
{
	int i;
	unsigned int val;

	instruction_t instruct[] = {
		{"push", _push},
		{"pop", _pop},
		{"pint", _pint},
		{"pall", _pall},
	};

	for (i = 0; i < 4; i++)
	{
		if (strcmp(argv[0], instruct[i].opcode) == 0)
		{

			if (argv[1] == NULL)
				val = 0;
			else
				val = (unsigned int) atoi(argv[i]);

			instruct[i].f(stack, val);
			break;
		}

		if (i == 3)
		{
			if (argv[0] == "#")
			{
				break;
			}
		}
	}
}
