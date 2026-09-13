#include<stdio.h>
int main()
{
	int a, b, result;
	printf("Enter Positive Integer a: ");
	scanf("%d", &a);
	printf("Enter Positive Integer b: ");
	scanf("%d", &b);
	result = a & b;
	result = result >> 2;
	printf("Result: %d\n", result);
	return 0;
}
