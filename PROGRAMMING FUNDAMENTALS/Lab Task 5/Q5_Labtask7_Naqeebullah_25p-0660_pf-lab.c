#include<stdio.h>
int main()
{
	
	printf("Name:\t\tNaqeebullah\nRoll No:\t25p-0660\nSection:\tBCS-1B\n");
	
	int i,j,k,n;
	
	printf("Enter Number of Rows: ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}

		for(j=1;j<=2*i-1;j++)
		{
			if(j==1 || j==2*i-1)
			printf("*");
		else
			printf(" ");
		}
	
		printf("\n");
	}

	for (i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
	
		for(j=1;j<=2*i-1;j++)
		{
			if(j==1 || j==2*i-1)
				printf("*");
			else
				printf(" ");
		}
		
		printf("\n");
	}
return 0;
}
	
