#ifndef _USERNAME_HEADER
#define _USERNAME_HEADER


#include <pwd.h>

char *get_username();
uid_t getuid();
struct passwd *getpwuid(uid_t);


#endif
