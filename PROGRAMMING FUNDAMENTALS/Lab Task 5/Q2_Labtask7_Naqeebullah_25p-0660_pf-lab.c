#include <stdio.h>
int main() 
{
	
    int n;
    int d;
    int i, j, temp;    

	printf("Name:\t\tNaqeebullah\nRoll No:\t25p-0660\nSection:\tBCS-1B\n");

	printf("Enter the size of array");
	scanf("%d",&n);
	
	printf("Enter the numbers for Array");
	
	int arr[n];
	
	for(i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);	
	}

	printf("Enter Position");
	scanf("%d",&d);

    d = d % n;

	int s = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i < d; i++) 
	{
        temp = arr[0];
        
        for(j = 0; j < s - 1; j++) 
		{
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = temp; 
    }

    for(i = 0; i < s; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}




