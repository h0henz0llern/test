#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main()
{
	int fd[2];
	char first[] = "String to be transfered", second[50];
	pipe(fd);
	write(fd[1], first, strlen(first) + 1);
	read(fd[0], second, sizeof(second));
	write(STDOUT_FILENO, second, strlen(second) + 1);
	close(fd[0]);
	close(fd[1]);
	return 0;
}