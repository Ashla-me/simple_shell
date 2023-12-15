#include "shell.h"

/**
* _builtin - handles execution of builtin functions
* @cmd: tokenized commands
* @read: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int _builtin(char **cmd, char *read)
{
	struct builtin builtin = {"env", "exit"};

	if (_strcmp(*cmd, builtin.env) == 0)
	{
		presh_env();
		return (1);
	}
	else if (_strcmp(*cmd, builtin.exit) == 0)
	{
		exit_me(cmd, read);
		return (1);
	}
	return (0);
}
