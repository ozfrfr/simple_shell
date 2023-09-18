#ifndef MY_SHELL_FUNCTIONS_H
#define MY_SHELL_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>

extern char **environ;

int promptDyl(void);
char *_readDyl(void);
char *_fullpathbfDyl(char **av, char *PATH, char *copy);
int checkbuiltinsDyl(char **av, char *buffer, int exitstatus);
int _forkprocesDyl(char **av, char *buffer, char *flpthbfD);

char *_strdupDyl(char *Dylnstr);
int _splitstringDyl(char *Dylnstr);
int _strcmpDyl(const char *strD1, const char *strD2);
char *_strcatDyl(char *dest, char *src);
int _strlenDyl(char *s);

char **tokenizeDyl(char *buffer);
int _splitPATHdYl(char *Dylnstr);
int _PATHstrcmpDyl(const char *strD1, const char *strD2);
char *_concatDyl(char *tmp, char **av, char *tok);

char *_getenvDyl(const char *name);
int _Dylenv(void);
void _putsDyl(char *Dylnstr);
int _Dylnaptch(char c);
char *_memsetDyl(char *s, char b, unsigned int n);

#endif
