#include <stdio.h>
#include <stdlib.h>

#define WELCOME "Welcome to Well Operating shell -> wosh."
#define WARNING "Use ctrl+c to exit."
#define TRUE 1

int input (char *command);
void start ();

int main()
{
	char command[50];
	printf("\n%s\n%s\n", WELCOME, WARNING);
	start();
	while(!input(command)) {}
	while(TRUE)
	{
		system(command);
		start();
		while(!input(command)) {}
	}
	return 0;
}

int input (char *command)
{
	fgets(command, 50, stdin);
	return 1;
}

void start ()
{
	printf("wosh > ");
}