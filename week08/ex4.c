#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/resource.h>

int main()
{
	size_t mem = 10 * 1024 * 1024;
	struct rusage usage;

	for (int i = 0; i < 10; i++)
	{
		int * alc = malloc(mem);
		memset(alc, 0, mem);
		getrusage(RUSAGE_SELF, &usage);
		printf("Memory usage: %ld\n", usage.ru_maxrss);
		sleep(1);
	}
	return 0;
}