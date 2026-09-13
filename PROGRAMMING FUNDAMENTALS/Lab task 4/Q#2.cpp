#include<stdio.h>
int main()
{
	int a=0, b=1, next, sum=0;
	printf("Fabonacci series upto 10000\n");
	for(; a<=10000 ; ){
	printf("%d \n", a);
	if(a % 3 == 0 || a % 5 == 0 || a % 7 == 0){
		sum += a;
	}
	next=a+b;
	a=b;
	b=next;
	}
	printf("Sum of Numbers in series divisible by 3, 5 or 7 = S%d\n", sum);
getchar();
return 0;
}

