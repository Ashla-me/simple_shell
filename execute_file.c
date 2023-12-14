#include "shell.h"

/**
 * execute_file - read from a file
 * @cmd: line command
 * @ptr: file to be read from
 * Return: nothing
 */

void execute_file(char *cmd, FILE *ptr)
{
	char **comm;

	comm = parse_cmd(cmd);

	execute_command(comm, cmd);
	free(comm);
	fclose(ptr);
}

