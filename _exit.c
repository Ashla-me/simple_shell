#include "shell.h"

/**
* exit_me - handles the command exit
* @cmd: tokenized command
* @line: input read from stdin
*
* Return: 0
*/
void exit_me(char **cmd, char *line)
{
	free(line);
	case_buffer(cmd);
	exit(0);
}
