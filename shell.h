#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
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

extern char **environ;
void exit_me(char **cmd, char *line);
int look_check(char **d, char *put);
char *check_path(void);
void presh_env(void);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/**
 * struct builtin - shows the environment and exit
 * @env: environment
 * @exit: leaves working envirnment
 */

struct builtin

{
	char *env;
	char *exit;
} builtin;

int presh_print(char *p);
/**
 * struct flags - displays the interactive mode
 * @interactive: an environment
 */
struct flags
{
	bool interactive;
} flags;

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

/**
 * struct builtin - contains a builtin string and related function
 * @type: the builtin command flag
 * @func: the function
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;

/**
 * struct info - access one of the content of the struct
 * @final_exit: access the exit command
 * @ln_count: access length of count
 */
struct info
{
	int final_exit;
	int ln_count;
} info;

#endif
