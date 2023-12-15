#include "shell.h"

/**
* try_path - checks if path is valid
* @path: tokenized path
* @cmd: user input command
*
* Return: path appended with command on success
* NULL on failure
*/
char *try_path(char **path, char *cmd)
{
	int n = 0;
	char *result;

	while (path[n])
	{
		result = append_path(path[n], cmd);
		if (access(result, F_OK | X_OK) == 0)
			return (result);
		free(output);
		n++;
	}
	return (NULL);
}
