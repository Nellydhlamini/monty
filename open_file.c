#include "monty.h"

/**
  * open_file - Opens a file to interpret the commands within
  * @filename: The file to be opened
  * Return: The file descriptor of the opened file
  */
FILE *open_file(char *filename)
{
FILE *file_d = NULL;

check_access_rights(filename);

file_d = fopen(filename, "r");

if (!file_d)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}
return (file_d);
}
