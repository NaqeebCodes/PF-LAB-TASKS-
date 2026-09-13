#include<stdio.h>
int main()
{
	printf("Name:\t\tNaqeebullah\nRoll No:\t25p-0660\nSection:\tBCS-1B\n");
	
	int m, n, i, j;
	
	printf("\nEnter m and n of Matrix: ");
	scanf("%d %d", &m, &n);
	
	if(m != n){
		printf("Not a Symmetric\n");
		return 0;	
	
	}

	int array[m][n];

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
		printf("Enter a[%d][%d]: ", i, j);
		scanf("%d", &array[i][j]);
		}
	}
	printf("\nOriginal Matrix:\n");
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
		printf("%d ", array[i][j]);
		}
		
		printf("\n");
	}
	int symmetric = 1;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(array[i][j] != array[j][i])
			{
				symmetric = 0;
				break;
			}
		}
		
		if(!symmetric) break;
	}
	
	if(symmetric)
	{
		printf("\nSymmetric\n");
	} 
	
	else 
	{
		printf("\nNot a Symmetric\n");
	}
return 0;
}
		
		
