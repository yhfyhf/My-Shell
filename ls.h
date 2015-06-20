#ifndef _LS_HEADER
#define _LS_HEADER

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pwd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

void do_ls(char[], int);
void do_ls_l(char[], int);
void do_stat(char *);
void show_file_info(char *, struct stat*);
void mode_to_letters(int, char[]);
char *uid_to_name(uid_t);
char *gid_to_name(gid_t);


#endif
