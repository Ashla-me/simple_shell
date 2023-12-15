#include "shell.h"

/**
* _strncmp - compares two strings up to n bytes
* @b1: compared to s2
* @b2: compared to s1
* @i: number of bytes
*
* Return: difference between s1 and s2
*/
int _strncmp(char *b1, char *b2, int i)
{
	int j;

	for (j = 0; b1[j] && b2[j] && j < i; j++)
	{
		if (b1[j] != b2[j])
			return (b1[j] - b2[j]);
	}
	return (0);
}
