#include "shell.h"

/**
 * execute_cmmd - executes commands entered by users
 *@mn: command
 *@argv:vector array of pointers to commands
 * Return: 0
 */
void execute_cmmd(char *mn, char **argv)
{
	pid_t child_pid;
	int pid;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(mn, argv, env);
		perror(mn);
		free(mn);
		free_buffers(argv);
		exit(1);
	}
	else
		wait(&pid);
}
