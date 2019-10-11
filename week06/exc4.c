#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handle_sigkill()
{
	printf("\nCaught SIGKILL\n");
}

void handle_sigstop()
{
	printf("\nCaught SIGSTOP\n");
}

void handle_sigusr1()
{
	printf("\nCaught SIGUSR1\n");
}

int main()
{
	signal(SIGKILL, handle_sigkill);
	signal(SIGSTOP, handle_sigstop);
	signal(SIGUSR1, handle_sigusr1);
	sleep(10);
	return 0;
}