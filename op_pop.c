#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *x = *stack, *tmp = NULL;

if (*stack == NULL)
handle_error(ERR_POP_USG, NULL, line_number, NULL);

tmp = x;
if (x->next)
{
x = x->next;
x->prev = tmp->prev;
*stack = x;
}
else
{
*stack = NULL;
}
free(tmp);
}
