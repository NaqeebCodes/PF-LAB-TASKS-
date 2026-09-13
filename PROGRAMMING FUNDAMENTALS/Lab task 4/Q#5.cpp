#include<stdio.h>
int main(){
	int daily_temp[7]={15,28,35,30,12,25,40};
	int cold=0, mild=0, hot=0;
	for(int i=0; i<=7; i++){
		if(daily_temp[i] <= 20){
			cold++;
		}
		else if(daily_temp[i] > 20 && daily_temp[i] < 35){
			mild++;
		}
		else{
			hot++;
		}
	}
		printf("TOtal Cold Day (<=20): %d\n", cold);
		printf("Total Mild Day (>20 & <35): %d\n", mild);
		printf("Total Hot Day (>35): %d\n", hot);
	printf("Thankyou");
	return 0;
}
