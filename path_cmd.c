#include "shell.h"

/**
 * path_cmd - Searches PATH for command.
 * @cmd: command.
 *
 * Return: 0 on success, 1 on failure.
 */

int path_cmd(char **cmd)
{
        char *path;
        char *direc;
        char *command_path;
        struct stat flip;

        path = _getenv("PATH");
        direc = strtok(path, ":");

        while (direc)
        {
                command_path = build_path(*cmd, direc);
                if (stat(command_path, &flip) == 0)
                {
                        *cmd = _strdup(command_path);
                        free(command_path);
                        free(path);
                        return (0);
                }

                free(command_path);
                direc = strtok(NULL, ":");
        }
        free(path);

        return (1);
}
