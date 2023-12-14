#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <stddef.h>
#include <linux/limits.h>
#include <unistd.h>

#define BUFSIZE 1024

extern char **environ;

int execute_command(char **buffer, char *line);
void unveil_prompt(void);
void preshla_print(const char *content);
char **parse_cmd(char *content);
char *_getline(void);
char *_getenv(char *env_name);
void *_realloc(void *pt, unsigned int old_size, unsigned int new_size);
int _strlen(char *str);
void handle_comment(char *buff);
int _strcmp(char *str1, char *str2);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strdup(char *str);
char *_strcpy(char *destn, char *srce);
int path_cmd(char **command);
char *build_path(char *cmd, char *dir);
char *_strcat(char *destn, char *srce);
int _isalpha(int c);
int _atoi(char *str);
void _read(char *file_name, char **argv);
void execute_file(char *cmd, FILE *ptr);


#endif
