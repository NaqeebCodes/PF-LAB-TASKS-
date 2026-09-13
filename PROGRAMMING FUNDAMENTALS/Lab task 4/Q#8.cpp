#include<stdio.h>
int main()
{
	int n;
	printf("Enter How many Number do you want To store in Array\n");
	scanf("%d", &n);
		printf("Enter Numbers\n");
	int num[n];
	for(int i=0; i<n; i++)
	{
	   scanf("%d", &num[i]);
	}
printf("Reverse of Numbers\n");	
		for(int i=n-1; i>=0; i--)
	{
	   printf("%d\n", num[i]);
	}
return 0;
}
