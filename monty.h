#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **_strtok(char *str, const char *delim);
size_t print_dlistint(const stack_t *h);
size_t dlistint_len(const stack_t *h);
stack_t *add_dnodeint(dlistint_t **head, const int n);
stack_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(stack_t *head);
stack_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(stack_t *head);
stack_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);

#endif
