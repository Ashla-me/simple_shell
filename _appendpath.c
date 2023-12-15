#include "shell.h"

/**
* _append - adds path to command
* @path: path of command
* @cmd: user entered command
*
* Return: buffer containing command with path on success
* NULL on failure
*/
char *_append(char *path, char *cmd)
{
	char *sip;
	size_t a = 0, b = 0;

	if (cmd == 0)
		cmd = "";

	if (path == 0)
		path = "";

	sip = malloc(sizeof(char) * (_strlen(path) + _strlen(cmd) + 2));
	if (!sip)
		return (NULL);

	while (path[a])
	{
		sip[a] = path[a];
		a++;
	}

	if (path[a - 1] != '/')
	{
		sip[a] = '/';
		a++;
	}
	while (cmd[b])
	{
		sip[a + b] = cmd[b];
		b++;
	}
	sip[a + b] = '\0';
	return (sip);
}
