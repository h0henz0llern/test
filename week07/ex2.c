#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0;
	printf("Number of integers: ");
	scanf("%d", &N);
	int *arr = malloc(N * sizeof(int));

	for (int i = 0; i < N; i++)
	{
		arr[i] = i;
		printf("%d ", i);
	}
	printf("\n");
	free(arr);
	return 0;
}