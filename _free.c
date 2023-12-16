#include "shell.h"
/**
 * _free - frees a string of strings
 * @kat: string of strings
 */
void _free(char **kat)
{
	char **a = kat;

	if (!kat)
		return;
	while (*kat)
		free(*kat++);
	free(a);
}
