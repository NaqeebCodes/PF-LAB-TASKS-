#include<stdio.h>
int main() 
{
	printf("Name: Naqeebullah \nRollno: 25P-0660 \nSection: BCS-1B\n");
	printf("WELCOME TO ZU RESTOURANT ONLINE ORDER PLACEMENT \nSelect from following menu\n");
    int n, qty;
    char choice;
    int total = 0;

    printf("B = Burger (Rs.200)\n");
    printf("F = French Fries (Rs.50)\n");
    printf("P = Pizza (Rs.500)\n");
    printf("S = Sandwiches (Rs.150)\n");

    printf("\nEnter number of types of snacks you want to order (2, 3 or 4): ");
    scanf("%d", &n);

    if (n == 2) {
        printf("\nEnter choice for snack 1 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }

        printf("\nEnter choice for snack 2 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }
    }
    else if (n == 3) {
	
        printf("\nEnter choice for snack 1 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }

        printf("\nEnter choice for snack 2 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }

        printf("\nEnter choice for snack 3 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty;
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }
    }
    else if (n == 4) {
        printf("\nEnter choice for snack 1 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }
        printf("\nEnter choice for snack 2 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);
        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }
        printf("\nEnter choice for snack 3 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);
        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }
        printf("\nEnter choice for snack 4 (B/F/P/S): ");
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);
        switch (choice) {
            case 'B': case 'b': total += 200 * qty; 
			break;
            case 'F': case 'f': total += 50 * qty; 
			break;
            case 'P': case 'p': total += 500 * qty; 
			break;
            case 'S': case 's': total += 150 * qty; 
			break;
            default: printf("Invalid choice!\n");
        }
    }
    else {
        printf("\nYou must enter 2, 3, or 4 snacks only!\n");
    }
    printf("\nTotal Charges for your order = Rs.%d\n", total);
    printf("Thankyou for your order have a nice day!\n");
    return 0;
}

