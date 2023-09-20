#include "monty.h"

/**
 * pall - Prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *x = NULL;
(void) line_number;

if (*stack)
{
x = *stack;
while (x != NULL)
{
printf("%d\n", x->n);
x = x->next;
}
}
}
