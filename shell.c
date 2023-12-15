#include "shell.h"
/**
* main - carries out the read, execute then print output loop
* @argc: argument count
* @argv: argument vector
* @envp: environment vector
*
* Return: 0
*/

int main(int argc, char **argv, char *envp[])
{
	char *read = NULL, *pathcmd = NULL, *path = NULL;
	size_t sip_size = 0;
	ssize_t readsize = 0;
	char **cmd = NULL, **pathway = NULL;
	(void)envp, (void)argv;

	if (argc < 1)
		return (-1);
	signal(SIGINT, _signal);
	while (1)
	{
		case_buffer(cmd);
		case_buffer(pathway);
		free(pathcmd);
		unveil_prompt();
		readsize = getline(&read, &sip_size, stdin);
		if (readsize < 0)
			break;
		info.ln_count++;
		if (read[readsize - 1] == '\n')
			read[readsize - 1] = '\0';
		cmd = token(read);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (look_check(cmd, read))
			continue;
		path = check_path();
		pathway = token(path);
		pathcmd = try_path(pathway, cmd[0]);
		if (!pathcmd)
			perror(argv[0]);
		else
			execute_cmmd(pathcmd, cmd);
	}
	if (readsize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(read);
	return (0);
}
