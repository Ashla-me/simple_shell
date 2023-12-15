#include "shell.h"

/**
* case_buffer - frees buffers
* @sip: buffer to be freed
*
* Return: no return
*/
void case_buffer(char **sip)
{
	int a = 0;

	if (!sip || sip == NULL)
		return;
	while (sip[a])
	{
		free(sip[a]);
		a++;
	}
	free(sip);
}
