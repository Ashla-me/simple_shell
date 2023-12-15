#include "shell.h"

/**
* unveil_prompt - prints $ and ready to take user input
* prints the prompt if the shell is in interactive mode
* Return: no return
*/
void unveil_prompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
