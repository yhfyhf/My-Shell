#include "username.h"

char *get_username() {
    struct passwd *p = getpwuid(getuid());
    return p->pw_name;
}
