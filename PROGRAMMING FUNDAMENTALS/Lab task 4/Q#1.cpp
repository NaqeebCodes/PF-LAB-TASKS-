#include<stdio.h>
int main()
{
	int n, r; 
	int fizz=0, buzz=0, fizzbuzz=0;
	printf("Enter Range\n");
	printf("Enter Starting Number\n");
	scanf("%d", &n);
	printf("Enter Ending Number\n");
	scanf("%d", &r);
	for(int i=n;i<=r;i++){
	if(i%3 == 0 && i%5 == 0){
	fizzbuzz++;
	}
	if(i%3 == 0){
	fizz++;
	}
	if(i%5 == 0){
	buzz++;
	}
}
	printf("Fizz-Buzz= %d\n", fizzbuzz);
	printf("Fizz= %d\n", fizz);
	printf("Buzz= %d\n", buzz);
return 0;
}

