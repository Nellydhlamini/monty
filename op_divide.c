#include "monty.h"

/**
 * divide - Divides the second top element by the top element of the stack
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 * Return: void
 */
void divide(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = *stack;
unsigned int x = 0, y = 0, length = 0;

length = count_stack(*stack);

if (length < 2)
handle_error(ERR_DIV_USG, NULL, line_number, NULL);

x = tmp->n;

if (x == 0)
handle_error(ERR_DIV_ZRO, NULL, line_number, NULL);

y = tmp->next->n;
tmp->next->n = y / x;
*stack = tmp->next;
free(tmp);
}
