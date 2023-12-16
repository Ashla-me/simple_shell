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

/**
 * for read/write buffers
 * @buffer size 
 */

#define READ_BUF_SIZE
#define WRITE_BUF_SIZE
#define BUF_FLUSH

/**
 * for command chaining
 */
#define CMD_NORM
#define CMD_OR
#define CMD_AND
#define CMD_CHAIN

/**
 * for convert_number()
 * @CONVERT_LOWERCASE: to change lower space
 */
#define CONVERT_LOWERCASE
#define CONVERT_UNSIGNED

/**
 * 1 if using system getline()
 * @USE_GETLINE: for a new line
 */
#define USE_GETLINE
#define USE_STRTOK

#define HIST_FILE
#define HIST_MAX

extern char **environ;


/**
 * struct liststr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

/**
 * struct passinfo - contains pseudo-arguements to pass into a function,
 * allowing uniform prototype for function pointer struct
 * @arg: a string generated from getline containing arguements
 * @argv:an array of strings generated from arg
 * @path: a string path for the current command
 * @argc: the argument count
 * @line_count: the error count
 * @err_num: the error code for exit()s
 * @linecount_flag: if on count this line of input
 * @fname: the program filename
 * @env: linked list local copy of environ
 * @environ: custom modified copy of environ from LL env
 * @history: the history node
 * @alias: the alias node
 * @env_changed: on if environ was changed
 * @status: the return status of the last exec'd command
 * @cmd_buf: address of pointer to cmd_buf, on if chaining
 * @cmd_buf_type: CMD_type ||, &&, ;
 * @readfd: the fd from which to read line input
 * @histcount: the history line number count
 */
typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buf; /* pointer to cmd ; chain buffer, for memory mangement */
	int cmd_buf_type; /* CMD_type ||, &&, ; */
	int readfd;
	int histcount;
} info_t;


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
void *realloc_mem(void *mrt, unsigned int 1_size, unsigned int 2_size);
char *memset(char *a, char b, unsigned int c);
void _free(char **kat);
int _renumber_history(info_t *info);
int _build_history_list(info_t *info, char *put, int lncount);
int _read_history(info_t *info);
int _write_history(info_t *info);
char *_get_history_file(info_t *info);
int _replace_string(char **black, char *white);
int _replace_vars(info_t *info);
int _replace_alias(info_t *info);
void _check_chain(info_t *info, char *buf, size_t *y, size_t i, size_t len);
int _is_chain(info_t *info, char *buf, size_t *y);

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
