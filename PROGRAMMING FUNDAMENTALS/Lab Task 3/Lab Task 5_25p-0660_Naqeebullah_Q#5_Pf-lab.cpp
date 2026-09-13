#include <stdio.h>
int main()
{
    char coffeeType;
    int isDouble, isManual;
    printf("Name: Naqeebullah \nRollno: 25P-0660 \nSection: BCS-1B\n");
    printf("Enter Coffee Type (W = White, B = Black):\n");
    scanf("%c", &coffeeType);

    printf("Is cup size double? (1 for yes, 0 for no): \n");
    scanf("%d", &isDouble);

    printf("Is coffee manual? (1 for yes, 0 for no):\n");
    scanf("%d", &isManual);

    printf("Coffee Preparation Steps\n");

    switch(coffeeType) {

        case 'W':
        case 'w':
            printf("Put Water: %d mins\n",15, isDouble);
            printf("Add Sugar: %d mins\n",15, isDouble);
            printf("Mix Well: %d mins\n",20, isDouble);
            printf("Add Coffee: %d mins\n",2, isDouble);
            printf("Add Milk: %d mins\n",4, isDouble);
            printf("Mix Well: %d mins\n",20, isDouble);
            printf("The total time is: 1 hour and 16 minute");
            break;

        case 'B':
        case 'b':
            printf("Put Water: %d mins\n",20, isDouble);
            printf("Add Sugar: %d mins\n",20, isDouble);
            printf("Mix Well: %d mins\n",25, isDouble);
            printf("Add Coffee: %d mins\n",15, isDouble);
            printf("Mix Well: %d mins\n",25, isDouble);
            printf("The total time is: 1 hour and 45 minute ");
            break;

        default:
            printf("Invalid coffee type!\n");
    }
    return 0;
}

