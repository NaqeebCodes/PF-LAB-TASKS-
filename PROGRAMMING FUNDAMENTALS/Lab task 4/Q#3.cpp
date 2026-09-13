#include<stdio.h>
int main()
{
	int a, b, max, gcd;
	printf("Enter Two Numbers\n");
	scanf("%d %d", &a, &b);
	max = (a>b) ? a : b;
	while(1){
	if( max % a == 0 && max %b == 0){
	printf("LCM of %d and %d is: %d\n", a, b, max);	
	break;
	}
	max++;
}
	for(int i=1; i<=a && i<=b; i++){
	if(a % i == 0 && b % i == 0){
	gcd=i;
	}
	}
	printf("GCD of %d and %d is: %d\n", a, b, gcd);
return 0;
}



