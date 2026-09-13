#include<stdio.h>
int main()
{
	int n,digit;
	int sum=0;
	
	printf("Name:\t\tNaqeebullah\nRoll No:\t25p-0660\nSection:\tBCS-1B\n");
	
	printf("Enter The Number");
	scanf("%d", &n);
	
	while(n>0)
	{
		digit=n%10;
		sum+=digit;
		n = n/10;
	}
	
	printf("Sum is: %d",sum);
	
return 0;	
	
}
