#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        pid_t child_pid = fork();

        if (child_pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (child_pid == 0) {
            printf("Child %d executing ls -l /tmp:\n", i + 1);

            char *args[] = {"/bin/ls", "-l", "/tmp", NULL};
            if (execve("/bin/ls", args, NULL) == -1) {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        } else {
            wait(NULL);
        }
    }

    return 0;
}

