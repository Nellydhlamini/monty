#include "monty.h"

/**
  * handle_execution - Manages the operations to be executed by the interpreter
  * @op_code: The operation code to manage
  * @op_parameter: The parameter of the instruction
  * @line: The line on which the error occurred
  * @x: The method to be used by the interpreter
  * Return: 0 if the operation was executed correctly or errcode if is invalid
  */
int handle_execution(char *op_code, char *op_parameter, unsigned int line, int x)
{
int status_op = 0;
void (*oprt)(stack_t **, unsigned int);

if (strcmp(op_code, "stack") == 0)
return (METH_STACK);
else if (strcmp(op_code, "queue") == 0)
return (METH_QUEUE);

oprt = pick_func(op_code);
if (oprt)
{
if (strcmp(op_code, "push") == 0)
{
status_op = check_push_param(op_parameter);
if (status_op == ERR_PUSH_USG)
return (ERR_PUSH_USG);

if (x != 0 && x == METH_QUEUE)
oprt = pick_func("push_queue");

oprt(&head, atoi(op_parameter));
}
else
{
oprt(&head, line);
}

return (x);
}

return (ERR_BAD_INST);
}
