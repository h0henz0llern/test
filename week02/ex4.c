#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() 
{
	int first, second;
 	printf("Type first integer:");
 	scanf("%d", &first);
 	printf("Type second integer:");
 	scanf("%d", &second);
 	swap(&first, &second);
 	printf("After swapping:\n");
 	printf("First integer is %d\n", first);
 	printf("Second integer is %d\n", second);
 	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}