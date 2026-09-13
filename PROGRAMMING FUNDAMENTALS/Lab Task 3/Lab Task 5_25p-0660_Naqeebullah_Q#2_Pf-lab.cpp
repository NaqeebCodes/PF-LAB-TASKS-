#include<stdio.h>
int main()
{
	float a, m, n, x, y;
	printf("Name: Naqeebullah \nRoll No: 25P-0660 \nSection: BCS-1B \n");
	printf("Enter position of Sheep: \n");
	scanf("%f", &a);
	printf("Enter position of Wolf A: \n");
	scanf("%f", &x);
	printf("Enter position of Wolf B: \n");
	scanf("%f", &y);
	m=x-a;
	n=y-a;
	if(n>m)
	{
		printf("Wolf A");
	}
	else if(n<m)
	{
		printf("Wolf B");
    }
	else if(n==m)
    {
    	printf("Wolves distracted, Sheep Escaped");
	}
	return 0;
}
