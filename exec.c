#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

main() {
    printf("This is program one process id is %d.\n", getpid());
    execv("./exec2", NULL);

exit(112);
}
