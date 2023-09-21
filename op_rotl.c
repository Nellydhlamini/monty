#include "monty.h"

/**
  * rotl - Rotates the stack to the top
  * @stack: The head of the stack
  * @line_number: The line on which the error occurred
  * Return: void
  */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *y = *stack;
unsigned int tmp = 0;
(void) line_number;

if (y && y->next)
{
while (y->next != NULL)
{
tmp = y->n;
y->n = y->next->n;
y->next->n = tmp;
y = y->next;
}
}
}
