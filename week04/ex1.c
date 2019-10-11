#include <stdio.h>
#include <stdlib.h>

#ifndef EXIT_FAILURE
#define EXIT_FAILURE -1
#endif

int main() {
    int pid = fork(), n = 404;
    switch(pid) 
    {
        case -1:
            return EXIT_FAILURE;
        case 0:
            printf("Hello from child [%d - %d]\n", pid, n);
            break;
        default:
            printf("Hello from parent [%d - %d]\n", pid, n);
    }
    return 0;
}