#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number of Students\n");
	scanf("%d",&n);
	
	int marks;
	char students[n];
	int i;

	FILE*f1;
	f1 = fopen("D:\\1st semester 25\\PF LAB\\Lab Task 8\\Q1.txt", "w");
	fprintf(f1,"Marks Of Students\n");
	
	for(i=1; i<=n; i++)
	{
	printf("Enter Name And Marks of Student(%d)\n",i);
	scanf("%s %d",&students, &marks);

	fprintf(f1, " %s %d\n", students, marks);
	}
	fclose(f1);
return 0;
}