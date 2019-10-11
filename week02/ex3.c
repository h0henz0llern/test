#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
 	if (argc != 2) return 0;
 	int n = atoi(argv[1]);
 	int base = 2*n - 1;
 	int current = 1;
 	for (int i = 1; i <= n; i++)
 	{
 	 	int space = (base - current) / 2;
 	 	while (space > 0)
 	 	{
 	 	 	printf(" ");
 	 	 	space--;
 	 	}
 	 	for (int j = current; j > 0; j--)
 	 	{
 	 	 	printf("*");
 	 	}
 	 	printf("\n");
 	 	current = current + 2;
 	}
 	return 0;
}