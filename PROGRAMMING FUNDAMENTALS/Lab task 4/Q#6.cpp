#include<stdio.h>
int main()
{
	for(int i=0; i<=6; i++){
	if(i%2 != 0)
	printf("\t %d\t %d\t \t \n", i,i);
	else
	printf("%d\t %d\t %d\t %d\n", i, i, i, i);
	}
}

