#include<stdio.h>
int main()
{
	int count=0;
	char ltr;
	int text;
	
	printf("Enter The letter Do You Want To Count\n");
	scanf("%c", &ltr);
	
	FILE *letter;
	
	letter = fopen("D:\\1st semester 25\\PF LAB\\Lab Task 8\\Paragraph.txt", "r");
		while((text = getc(letter)) != EOF)
		{
			if(text == ltr )
			{
			count++;
			}
		}
	
	fclose(letter);
	
	printf("The Number of %c in the File is: %d", ltr, count);
return 0;
}