#include "monty.h"

/**
 * sub - Subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = *stack;
unsigned int x = 0, y = 0, length = 0;

length = count_stack(*stack);

if (length < 2)
handle_error(ERR_SUB_USG, NULL, line_number, NULL);

x = tmp->n;
y = tmp->next->n;
tmp->next->n = y - x;
*stack = tmp->next;
free(tmp);
}
