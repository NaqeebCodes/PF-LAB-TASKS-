#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Name: Naqeebullah\n Roll No: 25p-0660\n Section: BCS-1b\n");
	printf("Enter the First Number");
	scanf("%d", &a);
	printf("Enter the Second number");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("After swaping:\n");
	printf("a = %d, b = %d\n", a,b);
	return 0;
}

