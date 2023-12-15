#include "shell.h"

/**
 * execute_file - read from a file
 * @cmd: line command
 * @ptr: file to be read from
 * @argv: vector
 * Return: void
 */

void execute_file(char *cmd, FILE *ptr, char **argv)
{
	char **comm;

	comm = parse_cmd(cmd);

	if (_strncmp(comm[0], "exit", 4) == 0)
	{
		exit_file(comm, cmd, ptr);
	}

	execute_command(comm, cmd, argv);
	free(comm);
}

