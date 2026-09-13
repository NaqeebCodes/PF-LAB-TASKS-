#include<stdio.h>
int main()
{
	float a, b, c, d, x;
	printf("Name: Naqeebullah \nRoll No: 25P-0660 \nSection: BCS-1B \n");
	printf("Enter product amount: ");
	scanf("%f", &x);
	if (x<1999)
	{
		printf("No discount \n");
	}
	else if(x>=2000 && x<=4000)
	{
		a=x*0.2;
		printf("Actual Amount: %f \n Discounted Amount: %f \n Saved Amount: %f \n", x, a, x-a);
	}
	else if(x >= 4000 && x <= 6000)
	{
		b=x*0.3;
		printf("Actual Amount: %f \n Discounted Amount: %f \n Saved Amount: %f \n", x, b, x-b);
	}
	else if(x>6000)
	{
		c=x*0.5;
		printf("Actual Amount: %f \n Discounted Amount: %f \n Saved Amount: %f \n", x, c, x-c);	
	}
	return 0;
}
