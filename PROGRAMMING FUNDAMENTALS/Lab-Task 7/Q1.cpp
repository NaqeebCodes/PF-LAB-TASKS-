#include<stdio.h>
int main()
{
	int A[2][3]={{1,2,3},{4,5,6}}; int B[3][2]={{7,8},{3,4},{2,4}};
	int C[2][2]={{0,0},{0,0}};
	
	int i,j,k;
	
	for(i=0; i<2; i++){
        for(j=0;j<2;j++){
        	for(k=0;k<3;k++){
        		C[i][j]+= A[i][k]*B[k][j];
			}
		}    
    }
    
	printf("Product of matrices is:\n");
	printf("-----------------------\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
	
	return 0;
}





//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int **arr,i,j;
//	arr = (int **) malloc(4 * sizeof(int));
//	
//	for(i=0; i<4; i++){
//		arr[i] = (int *) malloc(3 * sizeof(int));
//	}
//	
//	printf("Enter The Values For Array\n");
//	for(i=0; i<4; i++){
//		for(j=0; j<3; j++){
//			printf("Enter The value for %d %d: ",i,j);
//			scanf("%d",&arr[i][j]);
//		}
//	}
//
//	int rowsum=0;
//	for(i=0; i<4; i++){
//		for(j=0;j<3;j++){
//			rowsum += arr[i][j];	
//		}
//		printf("Sum of Row #%d is: %d\n",i+1, rowsum);
//		rowsum = 0 ;
//	}
//	
//	
//	int colsum=0;
//	for(i=0; i<3; i++){
//		for(j=0;j<4;j++){
//			colsum += arr[j][i];	
//		}
//		printf("Sum of Column #%d is: %d\n",j+1, colsum);
//		colsum = 0;
//	}
//	
//	int **transpose;
//	transpose = (int **) malloc(3 * sizeof(int));
//	
//	for(i=0; i<3; i++){
//		transpose[i] = (int *) malloc(4 * sizeof(int));
//	}
//	
//	for(i=0; i<4; i++){
//		for(j=0; j<3; j++){
//			transpose[j][i] = arr[i][j];
//		}
//	}
//	
//	printf("Transpose of the matrix is:\n");
//    for(i = 0; i < 3; i++){
//        for(j = 0; j < 4; j++){
//            printf("%d ", transpose[i][j]);
//        }
//        printf("\n");
//    }
//	
//	
//	free(arr);
//return 0;	
//}





//void adres(int* n)
//{
//	printf("Adress Of n %d", n);
//}
//
//int main()
//{
//	int n=5;
//	printf("Actual adress %d \n", &n);
//	adres(&n);
//	
//	return 0;	
//}


















//#include <stdio.h>
//#include <stdlib.h>
//
//int* findIntersection(int *arr1, int n1, int *arr2, int n2, int *resultSize){
//    int *temp = (int*)malloc((n1<n2?n1:n2)*sizeof(int));
//    int count=0, i, j, k;
//    for(i=0;i<n1;i++){
//        int found=0;
//        for(j=0;j<n2;j++){
//            if(*(arr1+i) == *(arr2+j)){
//                for(k=0;k<count;k++){
//                    if(temp[k]==*(arr1+i)) found=1;
//                }
//                if(!found) temp[count++] = *(arr1+i);
//            }
//        }
//    }
//    if(count==0){
//        free(temp);
//        *resultSize=0;
//        return NULL;
//    }
//    *resultSize = count;
//    return temp;
//}
//
//int main() {
//    int n1,n2,i,resSize;
//    printf("Enter size of first array: ");
//    scanf("%d",&n1);
//    int *arr1 = (int*)malloc(n1*sizeof(int));
//    for(i=0;i<n1;i++) scanf("%d", arr1+i);
//
//    printf("Enter size of second array: ");
//    scanf("%d",&n2);
//    int *arr2 = (int*)malloc(n2*sizeof(int));
//    for(i=0;i<n2;i++) scanf("%d", arr2+i);
//
//    int *res = findIntersection(arr1,n1,arr2,n2,&resSize);
//    if(res){
//        printf("Intersection: ");
//        for(i=0;i<resSize;i++) printf("%d ", *(res+i));
//        printf("\n");
//        free(res);
//    } else printf("No intersection\n");
//
//    free(arr1); free(arr2);
//    return 0;
//}























//printf("Name: Naqeebullah \nRoll No: 25P-0660 \nSection: BCS-1B \n");




//#include <stdio.h>
//int main() 
//{
//	float s,r;
//	float area_sq(float x);
//	float area_cr(float r);
//	
//	printf("Enter Side of a Square: ");
//	scanf("%f", &s);
//	area_sq(s);
//	
//	printf("Enter radius of a circle: ");
//	scanf("%f", &r);
//	area_cr(r);
//return 0;	
//}
//
//void area_sq(float x){
//	x = x*x;
//	printf("The Area Is: %f",x);
//}
//
//void area_cr(float y){
//	y = y * y * 3.14;
//	printf("The Area Is: %f",y);
//}
	
//    int st[4][2];
//    int i, j;
//
//    // Input
//    for(i = 0; i < 4; i++){
//        for(j = 0; j < 2; j++){
//            printf("Enter value for [%d][%d]: ", i, j);
//            scanf("%d", &st[i][j]);
//        }
//        printf("\n");	
//    }
//
//    // Output
//    printf("The 2D array is:\n");
//    for(i = 0; i < 4; i++){
//        for(j = 0; j < 2; j++){
//            printf("%d ", st[i][j]);
//        }
//        printf("\n");
//    }

    


//	char str[13] = "Shahzad" ;
//	
//	printf("Length of string is: %d",strlen(str));
//	
//	puts(str);
	
//	int arr[7]={3,4,5,1,2,6,7};
//	int i, j;
//	for(i=0; i<=6; i++)
//	{
//		arr[i] = arr[6-i];
//	}
//	
//	for(j=0; j<=6; j++)
//	{
//	printf("\n%d", arr[j]);
//	}
//	int arr[5]={13,23,25,29,11};
//	int n,i;
//	int ctr=0,sum=0;
//	
//	printf("Enter Number: ");
//	scanf("%d",&n);
//	
//	for(i=0; i<5; i++){
//		arr[0]+=arr[i+1];
//		sum= arr[i+1];
//		arr[1]+=arr[i+1];
//		sum= arr[i+1];
//		arr[2]+=arr[i+1];
//		sum= arr[i+1];
//		arr[3]+=arr[i+1];
//		sum= arr[i+1];
//		if(sum == n)
//		{
//			ctr++;
//		}	
//		
//	}
//	printf("\n%d",ctr);
	
//	int arr[5]={13,23,25,19,29};
//	int i;
//	int sumeven=0, sumodd=0;
//	int diff=0;
//
//	for(i=0; i<=4; i++)
//	{
//		if(i%2 != 0){
//			sumodd+=arr[i];
//		}
//		
//		else{
//			sumeven+=arr[i];
//		}
//	}
//	
//	diff = sumeven - sumodd;
//	
//	printf("The difference b/w them is: %d", diff);
	
//	printf("Enter Num: ");
//	scanf("%d",&n);
//	
//	for(i=0; i<=4; i++)
//	{
//		if(arr[i]>n){
//			ctr++;
//		}	
//	}
//	
//	printf("\n%d",ctr);
//	
//	


//	int i;
//	
//	for(i=0;i<13;i++)
//	{
//		if(i % 2 != 0){
//			arr[i] = arr[i]*2;
//		}
//		else{
//			arr[i]+=10;
//		}
//	}
//	
//	for(i=0;i<13;i++)
//	{
//		printf("\n %d",arr[i]);
//	}
	

