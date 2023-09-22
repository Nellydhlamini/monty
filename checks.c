#include "monty.h"

/**
  * check_args_num - Check the arguments passed on to the interpreter
  * @args: Number of args
  * Return: void
  */
void check_args_num(int args)
{
if (args != MIN_ARGS)
handle_error(ERR_ARG_USG, NULL, 0, NULL);
}

/**
  * check_access_rights - CChecks if the user has permissions to read the file
  * @filename: The pathname of the file
  * Return: void
  */
void check_access_rights(char *filename)
{
if (access(filename, R_OK) == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}
}

/**
  * check_push_param - Check the parameter of the push instruction
  * @parameter: The parameter to be verified
  * Return: 0 if is a valid param or errcode if is invalid
  */
int check_push_param(char *parameter)
{
if (parameter == NULL || check_digits(parameter) == 0)
return (ERR_PUSH_USG);
return (VALID_PARM);
}

/**
  * check_digits - Checks if all characters in a string are digits
  * @s: The string to be evaluated
  * Return: 1 if all if all evaluated characters are digits or 0 if not
  */
int check_digits(char *str)
{
int status = 1;

while (*str != '\0')
{
if (str[0] == 45)
{
++str;
continue;
}
if (isdigit(*str) == 0)
{
status = 0;
return (status);
}
++str;
}
return (status);
}
