#include "username.h"

int main(int argc, char const *argv[]) {
    printf("%s > ", get_username());	
	return 0;
}

char *get_username() {
    struct passwd *p = getpwuid(getuid());
    return p->pw_name;
}
