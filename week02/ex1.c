#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
 	int a = INT_MAX;
 	float b = FLT_MAX;
 	double c = DBL_MAX;
 	printf("Size of a is %lu bytes\n", sizeof(a));
 	printf("Size of b is %lu bytes\n", sizeof(b));
 	printf("Size of c is %lu bytes\n", sizeof(c));
 	printf("Value of a = %d\n", a);
 	printf("Value of b = %f\n", b);
 	printf("Value of c = %lf\n", c);
 	return 0;
}