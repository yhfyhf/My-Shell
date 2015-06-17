#include <stdio.h>
#include <string.h>

#include "ls.h"
#include "username.h"

int main() {
    char username[256];
    strcpy(username, get_username());
    printf("%s > ", username);

    char *input_cmd = NULL;
    size_t linecap = 0;
    ssize_t linelen;
    linelen = getline(&input_cmd, &linecap, stdin);
    input_cmd[linelen-1] = '\0';

    while (strcmp(input_cmd, "exit") != 0) {
        if (!strcmp(input_cmd, "ls")) {
            do_ls(".");
        }
        else if (!strcmp(input_cmd, "ls -al")) {
            do_ls_al(".");
        }
        else {
            printf("command not found: %s\n", input_cmd);
        }

        printf("%s > ", username);
        linelen = getline(&input_cmd, &linecap, stdin);
        input_cmd[linelen-1] = '\0';
    }
    printf("exit shell\n");
    return 0;        
}
