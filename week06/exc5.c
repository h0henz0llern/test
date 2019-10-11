#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main() {
        pid_t f = getpid();
        pid_t child_pid = fork();
        if (child_pid) 
        {
                sleep(10);
                kill(child_pid, SIGTERM); 
        }
        else 
        {
                while (1) 
                {
                        printf("I’m alive\n");
                        sleep(1);
                }
        }
}