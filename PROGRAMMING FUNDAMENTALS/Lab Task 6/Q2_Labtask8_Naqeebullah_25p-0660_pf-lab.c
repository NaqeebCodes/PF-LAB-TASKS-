#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number of Students\n");
	scanf("%d",&n);
	
	int marks;
	char students[n];
	int i;

	FILE*f2;
	f2 = fopen("D:\\1st semester 25\\PF LAB\\Lab Task 8\\Q2.txt", "a");
	fprintf(f2,"Marks Of Students\n");
	
	for(i=1; i<=n; i++)
	{
	printf("Enter Name And Marks of Student(%d)\n",i);
	scanf("%s %d",&students, &marks);

	fprintf(f2, " %s %d\n", students, marks);
	}
	fclose(f2);
return 0;
}