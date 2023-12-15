#include "shell.h"

/**
* _strcmp - compares two strings
* @a1: compared to s2;
* @a2: compared to s1;
*
* Return: returns difference between strings
*/
int _strcmp(char *a1, char *a2)
{
	int y = 0, result;

	while (*(a1 + y) == *(a2 + y) && *(a1 + y) != '\0')
		y++;

	result = (*(a1 + y) - *(a2 + y));

	return (result);
}
