#include "monty.h"

/**
  * pstr - Prints the string starting at the top of the stack,
  * followed by a new line
  * @stack: The head of the stack
  * @line_number: The line on which the error occurred
  * Return: void
  */
void pstr(stack_t **stack, unsigned int line_number)
{
stack_t *y = *stack;
(void) line_number;

while (y != NULL)
{
if (y->n == 0 || y->n < 0 || y->n > 127)
break;

printf("%c", y->n);
y = y->next;
}

printf("\n");
}
