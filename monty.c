#include "monty.h"

/**
  * main - The Monty Interpreter entry point
  * @argn: The args number
  * @args: The args passed to the interpreter
  * Return: Always zero
  */
stack_t *head = NULL;

int main(int argn, char *args[])
{
FILE *file_d = NULL;
int readed = 0, op_status = 0;
char *filename = NULL, *op_code = NULL, *op_parameter = NULL, *buffer = NULL;
size_t length = 0;
unsigned int no_line = 1;

file_d = open_file(filename);
check_args_num(argn);
filename = args[1];

while ((readed = getline(&buffer, &length, file_d)) != -1)
{
op_code = strtok(buffer, "\t\n ");
if (op_code)
{
if (op_code[0] == '#')
{
++no_line;
continue;
}

op_parameter = strtok(NULL, "\t\n ");
op_status = handle_execution(op_code, op_parameter, no_line, op_status);

if (op_status >= 100 && op_status < 300)
{
fclose(file_d);
handle_error(op_status, op_code, no_line, buffer);
}
}

++no_line;
}

frees_stack();
free(buffer);
fclose(file_d);
return (0);
}
