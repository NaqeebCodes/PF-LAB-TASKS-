#include<stdio.h>
int main()
{
	printf("Name: Naqeebullah\n Roll No: 25p-0660\n Section: BCS-1b\n");
	int Totalpennies, pennies, nickels, dimes, quarters, reminder;
	Totalpennies=368;
	printf("Total pennies %d\n", Totalpennies);
	quarters= Totalpennies/25;
	reminder= Totalpennies%25;
	dimes= reminder/10;
	reminder= reminder%10;
	nickels= reminder/5;
	reminder= reminder%5;
	pennies= reminder;
	printf("Ali have Quarters =%d\n", quarters);
	printf("Dimes =%d\n", dimes);
	printf("Nickels =%d\n", nickels);
	printf("Pennies =%d\n", pennies);
	return 0;
}

