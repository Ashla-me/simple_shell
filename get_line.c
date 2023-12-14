#include "shell.h"

/**
 * _getline - Read a line from standard input.
 *
 * Return: A pointer to the read line.
 */
char *_getline(void)
{
	size_t buff_size = BUFSIZE, new_buff_size, s;
	int cmd = 0;
	char *buff = malloc(buff_size);

	for (s = 0; cmd != EOF && cmd != '\n'; s++)
	{
		fflush(stdin);
		if (read(STDIN_FILENO, &cmd, 1) == 0)
		{
			free(buff);
			exit(0);
		}

		buff[s] = cmd;
		if (buff[0] == '\n')
		{
			free(buff);
			return ('\0');
		}
		new_buff_size = buff_size + 1;

		if (s >= buff_size)
		{
			buff = _realloc(buff, buff_size, new_buff_size);
			if (buff == NULL)
				return (NULL);
		}
	}
	buff[s] = '\0';
	handle_comment(buff);
	return (buff);
}
