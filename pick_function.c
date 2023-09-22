#include "monty.h"

/**
  * pick_function - Select the function that relates to the Monty instruction
  * @str: The instruction to be executed
  * Return: A pointer to the function to be executed or
  * NULL if the function don't exists
  */
void (*pick_function(char *str))(stack_t **, unsigned int)
{
	instruction_t insts[] = {
		{ "push", push },
		{ "push_queue", push_queue },
		{ "pall", pall },
		{ "pint", pint },
		{ "pop", pop },
		{ "swap", swap },
		{ "add", add },
		{ "nop", nop },
		{ "sub", sub },
		{ "div", divide },
		{ "mul", mul },
		{ "mod", mod },
		{ "pchar", pchar },
		{ "pstr", pstr },
		{ "rotl", rotl },
		{ "rotr", rotr },
		{ NULL, NULL }
	};
int y = 0;

while (insts[y].opcode)
{
if (strcmp(str, insts[y].opcode) == 0)
return (insts[y].f);

++y;
}

return (NULL);
}
