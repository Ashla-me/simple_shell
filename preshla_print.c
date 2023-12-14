#include "shell.h"

/**
 * preshla_print - Display a message to the standard output
 * @message: The message to be displayed
 *
 * Description: This function writes the provided message to the
 * standard output using the write system call.
 */
void preshla_print(const char *message)
{
        write(STDOUT_FILENO, message, strlen(message));
}
