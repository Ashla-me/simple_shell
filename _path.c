#include "shell.h"

/**
 * build_path - build the Path.
 * @cmd: The Executable Command.
 * @dir: The Directory that contains the command.
 *
 * Return: Path.
 */

char *build_path(char *cmd, char *dir)
{
	char *command;
	int len2, len1;
	size_t length;

	len1 = _strlen(cmd);
	len2 = _strlen(dir);

	length = len1 + len2 + 1;
	command = malloc(sizeof(char) * (length + 1));

	memset(command, 0, (length + 1));

	command = _strcat(command, dir);
	command = _strcat(command, "/");
	command = _strcat(command, cmd);

	return (command);
}
