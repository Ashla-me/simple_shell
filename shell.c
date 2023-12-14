#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * Description: Calls functions to unveil the prompt, take a command,
 * and execute the command in a loop.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
        char *command;


        while (true)
        {
                unveil_prompt();
                command = _getline();
                execute_command(parse_cmd(command), command);

	}
	return (0)
}
