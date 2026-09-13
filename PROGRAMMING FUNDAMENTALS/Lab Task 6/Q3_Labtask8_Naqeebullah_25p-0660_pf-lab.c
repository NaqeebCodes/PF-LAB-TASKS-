#include<stdio.h>
int main()
{
	
	int n,i;
	printf("Enter the Number of Members\n");
	scanf("%d",&n);
	
	char members[n][50];
	
	FILE*m;
	m = fopen("D:\\1st semester 25\\PF LAB\\Lab Task 8\\Q3.txt","w");
	
	for(i=1; i<=n; i++)
	{
		printf("Enter Name of Member(%d)\n",i);
		scanf("%s",members[i]);

	fprintf(m, " %s\n",members[i]);
	}
	
	fclose(m);
	
	
	
	FILE*m1;
	m1 = fopen("D:\\1st semester 25\\PF LAB\\Lab Task 8\\Q3.txt","r");
	
	for(i=1; i<=n; i++)
	{
		fscanf(m1,"%s",members[i]);	
	}
	fclose(m1);
	
	printf("Members Are:\n");
	
	for(i=1; i<=n; i++)
	{
		printf("%s\n", members[i]);	
	}
return 0;
}