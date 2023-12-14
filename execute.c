#include "shell.h"

/**
 * execute_command - Execute a command using fork and execve.
 * @buffer: The command line to execute.
 * @line: The input command line.
 * Return: 0 on success, -1 on failure.
 */

int execute_command(char **buffer, char *line)
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
		perror("Error");
		return (-1);
	}

	if (pid == 0)
	{
		path_cmd(buffer);

		if (execve(*buffer, buffer, environ) == -1)
		{
			perror("execve: Error");
			free(line);
			free(buffer);
			exit(1);
		}
		return (0);
	}
	wait(&ppid);

	return (0);
}
