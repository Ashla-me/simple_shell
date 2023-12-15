#include "shell.h"

/**
 * execute_command - Execute a command using fork and execve.
 * @buffer: The command line to execute.
 * @line: The input command line.
 * @argv: vector
 * Return: 0 on success, -1 on failure.
 */

int execute_command(char **buffer, char *line, char **argv)
{
	int ppid;
	pid_t pid;

	if (*buffer == NULL)
	{
		return (1);
	}
	pid = fork();

	if (pid == -1)
	{
		return (-1);
	}

	if (pid == 0)
	{
		path_cmd(buffer);

		if (execve(*buffer, buffer, environ) == -1)
		{
			perror(argv[0]);
			free(line);
			free(buffer);
			exit(EXIT_FAILURE);
		}
		return (0);
	}
	wait(&ppid);

	return (0);
}
