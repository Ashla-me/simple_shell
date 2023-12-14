#include "shell.h"

/**
 * parse_cmd - parse a command string.
 * @content: The input command string.
 *
 * Return: An array of tokenized input.
 */

char **parse_cmd(char *content)
{
        char *token, **tok;
        int i;
        size_t buff_size;

        buff_size = BUFSIZE;

        if (content == NULL)
                return (NULL);

        tok = malloc(sizeof(char *) * buff_size);
        if (tok == NULL)
        {
                perror("Error!");
                return (NULL);
        }

        token = strtok((char *)content, "\n ");

        for (i = 0; token; i++)
        {
                tok[i] = token;
                token = strtok(NULL, "\n ");
        }
        tok[i] = NULL;

        return (tok);
}
