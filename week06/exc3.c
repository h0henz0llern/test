#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handle_sigint()
{
	printf("\nCaught SIGINT\n");
}

int main()
{
	signal(SIGINT, handle_sigint);
	sleep(10);
	return 0;
}