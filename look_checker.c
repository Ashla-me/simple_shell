#include "shell.h"
/**
 *look_check - checks to see weather its a built in function
 *@d: tokenized user input
 *@put: line drived fromgetline function
 *Return: 1 if cmd excuted 0 if cmd is not executed
 */
int look_check(char **d, char *put)
{
	if (_builtin(d, put))
		return (1);
	else if (**d == '/')
	{
		execute_cmmd(d[0], d);
		return (1);
	}
	return (0);
}
