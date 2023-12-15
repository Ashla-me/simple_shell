#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

void exit_me(char **cmd, char *line);
int look_check(char **d, char *put);
char *check_path(void);
void presh_env(void);
int presh_print(char *p);
char *_append(char *path, char *cmd);
int _builtin(char **cmd, char *read);
void case_buffer(char **sip);
void execute_cmmd(char *mn, char **argv);
int _putchar(char c);
void _signal(int a);
char *_strchr(char *r, char p);
char **token(char *zip);
char *try_path(char **path, char *cmd);
void unveil_prompt(void);
int _strcmp(char *a1, char *a2);
int _strlen(char *i);
int _strncmp(char *b1, char *b2, int i);
char *_strdup(char *t);
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/*struct files and commands*/
struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif
