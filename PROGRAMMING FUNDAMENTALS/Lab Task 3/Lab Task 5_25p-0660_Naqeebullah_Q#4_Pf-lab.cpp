#include<stdio.h>
int main()
{
	float fsc, nts;
	printf("Name: Naqeebullah \nRoll No: 25P-0660 \nSection: BCS-1B \n");
	printf("Enter FSC Marks: \n");
	scanf("%f", &fsc);
	printf("Enter NTS Marks: \n");
	scanf("%f", &nts);
	if(fsc>70)
	{
		if(nts>70){
			printf("Eligible for It in Oxford University");
		}
		else if(nts>=60){
			printf("Eligible for Electronics in Oxford University");
		}
		else if(nts>=50){
			printf("Eligible for Telecommunication in Oxford University");
		}
	}
	if(nts>=50)
	{
		if(fsc >= 60 && fsc <= 70){
			printf("Eligible for IT in MIT");
		}
		else if(fsc >= 50 && fsc <= 59){
			printf("Eligible for Chemical in MIT");
		}
		else if(fsc<50 && fsc>=40){
			printf("Eligible for Computer in MIT");
		}
	}
	return 0;
}
