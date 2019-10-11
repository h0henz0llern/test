#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int fd[2];
	pipe(fd);
	pid_t kek;
	kek = fork();

	if (kek > 0)
	{
		char first[] = "String to be transfered";
		write(fd[1], first, strlen(first) + 1);
		close(fd[1]);
	} 
	else if (kek == 0)
	{
		char second[50];
		read(fd[0], second, sizeof(second));
		write(STDOUT_FILENO, second, strlen(second) + 1);
		close(fd[0]);
		close(fd[1]);
	}
	return 0;
}