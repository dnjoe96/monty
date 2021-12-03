#include "monty.h"

/**
 * _push - push data at the top of a stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	printf("push %u on stack\n", line_number);
	add_dnodeint_end(stack, line_number);
}

/**
 * _pop - remove the top data on the stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _pop(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	size_t len;

	printf("pop function\n");
	len = dlistint_len(*stack);

	if (len == 0)
	{
		fprintf(stderr, "L<line_number>: can't pop an empty stack\n");
		exit(EXIT_FAILURE);
	}
	delete_dnodeint_at_index(stack, len - 1);
}

/**
 * _pall - print all data on the stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	printf("print all\n");
	print_dlistint(*stack);
}

/**
 * _swap - swap the top 2 data on the stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _swap(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	size_t len;
	stack_t *node;
	int val;

	printf("swap top\n");
	len = dlistint_len(*stack);

	node = get_dnodeint_at_index(*stack, len - 2);
	val = node->n;
	delete_dnodeint_at_index(stack, len - 2);

	add_dnodeint_end(stack, val);
}

/**
 * _add - add the first and second data on the stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _add(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *node1, *node2;
	size_t len;

	printf("add\n");
	len = dlistint_len(*stack);

	node1 = get_dnodeint_at_index(*stack, len - 1);
	node2 = get_dnodeint_at_index(*stack, len - 2);

	fprintf(stdout, "%d\n", node1->n + node2->n);
}

/**
 * _nop - do nothing
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _nop(__attribute__((unused)) stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	;
}

/**
 * _sub - subtract the 2nd data on the stack from the first
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _sub(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *node1, *node2;
	size_t len;

	printf("add\n");
	len = dlistint_len(*stack);

	node1 = get_dnodeint_at_index(*stack, len - 1);
	node2 = get_dnodeint_at_index(*stack, len - 2);

	fprintf(stdout, "%d\n", node1->n - node2->n);
}

/**
 * _mul - nultiply the last two data on the stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _mul(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *node1, *node2;
	size_t len;

	printf("add\n");
	len = dlistint_len(*stack);

	node1 = get_dnodeint_at_index(*stack, len - 1);
	node2 = get_dnodeint_at_index(*stack, len - 2);

	fprintf(stdout, "%d\n", node1->n * node2->n);
}

/**
 * _div - divide the 2nd data on the stack by the first
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _div(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *node1, *node2;
	size_t len;

	printf("add\n");
	len = dlistint_len(*stack);

	node1 = get_dnodeint_at_index(*stack, len - 1);
	node2 = get_dnodeint_at_index(*stack, len - 2);

	fprintf(stdout, "%d\n", node2->n / node1->n);
}

/*
void _mod(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	return;
}
*/

/**
 * _pint - print the last data on the stack
 *
 * @stack: pointer to the head node of doubly linked list
 * @line_number: data
 * Return: void
 */
void _pint(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	size_t len;
	stack_t *node;

	printf("print top\n");
	len = dlistint_len(*stack);
	node = get_dnodeint_at_index(*stack, len - 1);
	fprintf(stdout, "%u\n", node->n);
}
