#include <stdlib.h>
#include <stdio.h>

int main()
{
	char command[100];
	printf("Use ctrl+c to exit.\n");
	while(1)
	{
		printf("> ");
		scanf("%s", command);
		system(command);
	}
	return 0;
}
