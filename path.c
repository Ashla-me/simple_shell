#include "shell.h"

/**
* check_path - finds the path from the global enviroment
* Return: NULL if path is not found or path if path is found.
*/
char *check_path(void)
{
	int a;
	char **env = environ, *way = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			way = *env;
			while (*way && x < 5)
			{
				way++;
				a++;
			}
			return (way);
		}
		env++;
	}
	return (NULL);
}
