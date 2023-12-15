#include "shell.h"

/**
 * exit_first - exit Shell in file case
 * @store: line of command
 * @cmd: parsed command
 * @ptr: the file stream
 * Return: void
 */

void exit_file(char **cmd, char *store, FILE *ptr)
{
	int trill;
	int b = 0;

	if (cmd[1] == NULL)
	{
		free(store);
		free(cmd);
		fclose(ptr);
		exit(errno);
	}
	while (cmd[1][b])
	{
		if (_isalpha(cmd[1][b++]) < 0)
		{
			perror("Error");
		}
	}

	trill = _atoi(cmd[1]);
	free(store);
	free(cmd);
	fclose(ptr);
	exit(trill);
}
