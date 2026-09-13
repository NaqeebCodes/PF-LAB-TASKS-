#include<stdio.h>
int main()
{
	int w,a,x;
	printf("Name: Naqeebullah \nRoll No: 25P-0660 \nSection: BCS-1B \n");
	printf("Operation +, -, *, /");
	scanf("%d", &a);
	printf("Enter Number: ");
	scanf("%d", &w);
	printf("Enter 2nd Number: ");
	scanf("%d", &x);
	switch(a)
	{
		case 1:
			printf("Sum is: %d", w+x);
			break;
		case 2:
			printf("Difference is: %d", w-x);
			break;
		case 3:
			printf("Multiplication is: %d", w*x);
			break;
		case 4:
			printf("Division is: %d", w/x);
			break;		
	}
	return 0;
}

