#include "shell.h"

/**
 * handle_comment - Replace '#' character with null terminator.
 * @buff: Pointer to the string.
 *
 * This function replaces the '#' character
 * in the string with a null terminator.
 */
void handle_comment(char *buff)
{
        int z;

        for (z = 0; buff[z] != '\0'; z++)
        {
                if (buff[z] == '#')
                {
                        buff[z] = '\0';
                        break;
                }

        }
}
