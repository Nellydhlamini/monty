#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
unsigned int length = 0, tmp = 0;

length = count_stack(*stack);

if (length < 2)
handle_error(ERR_SWAP_USG, NULL, line_number, NULL);

if (*stack)
{
tmp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = tmp;
}
}
