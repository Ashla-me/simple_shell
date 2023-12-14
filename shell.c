#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * Description: Calls functions to unveil the prompt, take a command,
 * and execute the command in a loop.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	char *command;

	if (argv[1])
	{
		_read(argv[1], argv);
	}

	while (true)
	{
		if (isatty(STDIN_FILENO))
		{
			unveil_prompt();
		}
		command = _getline();
		execute_command(parse_cmd(command), command);
	}
	return (0);
}
