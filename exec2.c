#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

main(void) {
    printf("This is program two and  process id is %d.\n", getpid());

exit(114);
}
