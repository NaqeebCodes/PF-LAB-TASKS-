#include <stdio.h>
#include <math.h>
int main() {
    int acnt_no, mortgage;
    float mortgageAmount, interestRate;
    printf("Enter account number (-1 to end): ");
    scanf("%d", &acnt_no);
    if (acnt_no == -1) {
    	printf("Program ended");
    	return 0;
    }
    printf("Enter mortgage amount (in dollars): ");
    scanf("%f", &mortgageAmount);
    printf("Enter mortgage term (in years): ");
    scanf("%d", &mortgage);
    printf("Enter interest rate (as a decimal): ");
    scanf("%f", &interestRate);
    float totalInterest = mortgageAmount * interestRate * mortgage;
    float totalPayable = mortgageAmount + totalInterest;
    int months = mortgage * 12;
    float monthlyPayment = totalPayable / months;
    printf("The monthly payable interest is: $ %.0f\n", round(monthlyPayment));
    return 0;
}


