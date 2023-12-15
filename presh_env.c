#include "shell.h"

/**
* presh_env - prints the environment string to stdout
*
* Return: 0
*/
void presh_env(void)
{
	int n = 0;
	char **env = environ;

	while (env[n])
	{
		write(STDOUT_FILENO, (const void *)env[n], _strlen(env[n]));
		write(STDOUT_FILENO, "\n", 1);
		n++;
	}
}
