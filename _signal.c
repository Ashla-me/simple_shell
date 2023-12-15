#include "shell.h"

/**
 *_signal- it keeps track is interactive mode
 *@a: the signal number
 *Return: nothing
 */

void _signal(int a)
{
	(void)a;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
