#include<stdio.h>
int main()
{
	int num[7];
	int sum=0;
	printf("Enter Values For Array\n");
	for(int i=0; i<7; i++)
	{
	   scanf("%d", &num[i]);
	   sum+=num[i];
	}
	
	printf("Sum= %d", sum);
return 0;
}
