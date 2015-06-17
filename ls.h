#ifndef _LS_HEADER
#define _LS_HEADER


#include <pwd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>

void do_ls(char[]);
void do_ls_al(char[]);
void do_stat(char *);
void show_file_info(char *, struct stat*);
void mode_to_letters(int, char[]);
char *uid_to_name(uid_t);
char *gid_to_name(gid_t);


#endif
