#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
	size_t mem = 10 * 1024 * 1024;

	for (int i = 0; i < 10; i++)
	{
		int * alc = malloc(mem);
		memset(alc, 0, mem);
		sleep(1);
	}
	return 0;
}