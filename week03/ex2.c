#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int n, int *arr);

int main() 
{
    int n;
    printf("Type your array size: ");
    scanf("%d", &n);
    printf("Type items:\n");
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(n, arr);
    printf("Your sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int n, int *arr)
{
	int swap = 0;
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < n - i - 1; ++j) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
}
