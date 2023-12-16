#include "shell.h"

/**
 * _interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int _interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 1);
}
