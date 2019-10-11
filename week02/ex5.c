#include <stdio.h>
#include <stdlib.h>

void triangle(int n);
void isosceles(int n);
void sideways(int n);
void rectangle(int n);

int main(int argc, char **argv)
{
 	if (argc != 2) return 0;
 	int n = atoi(argv[1]);
 	int option;
 	printf("Type parameter number according to next list:\n");
 	printf("1 is a right-side-up triangle\n");
 	printf("2 is a right isosceles triangle\n");
 	printf("3 is a sideways triangle\n");
 	printf("4 is a rectangle\n");
 	scanf("%d", &option);
 	switch(option)
 	{
 		case 1: triangle(n); break;
 		case 2: isosceles(n); break;
 		case 3: sideways(n); break;
 		case 4: rectangle(n); break;
 		default: printf("There is no such parameter\n");
 	}
}

void triangle(int n)
{
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
}

void isosceles(int n)
{
	int current = 1;
 	for (int i = 1; i <= n; i++)
 	{
 		for (int j = current; j > 0; j--)
 	 	{
 	 	 	printf("*");
 	 	}
 	 	printf("\n");
 	 	current++;
 	}
}

void sideways(int n)
{
	int current = 1;
 	for (int i = 1; i <= n; i++)
 	{
 		for (int j = current; j > 0; j--)
 	 	{
 	 	 	printf("*");
 	 	}
 	 	printf("\n");
 	 	current++;
 	}
 	for (int i = 0; i <= n; i++)
 	{
 	 	for (int j = current; j > 0; j--)
 	 	{
 	 	 	printf("*");
 	 	}
 	 	printf("\n");
 	 	current--;
 	}
}

void rectangle(int n)
{
	for (int i = 1; i <= n; i++)
 	{
 		for (int j = n; j > 0; j--)
 	 	{
 	 	 	printf("*");
 	 	}
 	 	printf("\n");
 	}
}