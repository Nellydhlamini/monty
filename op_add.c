#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = *stack;
unsigned int x = 0, y = 0, length = 0;

length = count_stack(*stack);

if (length < 2)
handle_error(ERR_ADD_USG, NULL, line_number, NULL);

x = tmp->n;
y = tmp->next->n;
tmp->next->n = x + y;
*stack = tmp->next;
free(tmp);
}
