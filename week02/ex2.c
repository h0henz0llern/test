#include <stdio.h>
#include <string.h>

int main()
{
 	char input[100];
 	printf("Type your string:");
 	fgets(input, 100, stdin);
 	int size = strlen(input) - 1;
 	input[size] = input[size + 1];
 	for (int i = 0; i < size / 2; i++) 
 	{
 	 	char temp = input[i];
 	 	input[i] = input[size - i - 1];
 	 	input[size - i - 1] = temp;
 	}
 	puts(input);
 	return 0;
}