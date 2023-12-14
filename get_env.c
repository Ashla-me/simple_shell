#include "shell.h"

/**
 * _getenv - Get the value of an environment variable.
 * @env_name: The name of the environment variable.
 *
 * Return: The value of the environment variable or NULL if not found.
 */
char *_getenv(char *env_name)
{
	int i, j, k = 0;
	size_t item_length, name_length;
	char *item;

	name_length = _strlen(env_name);

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(env_name, environ[i], name_length) == 0)
		{
			item_length = _strlen(environ[i]) - name_length;
			item = malloc(sizeof(char) * item_length);

			for (j = name_length + 1; environ[i][j]; j++, k++)
			{
				item[k] = environ[i][j];
			}
			item[k] = '\0';

			return (item);
		}
	}
	return (NULL);
}
