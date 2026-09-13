#include<stdio.h>
int main()
{
	 int text;
	
	
	FILE *fpr1, *fpr2, *fpr3;
	
	fpr1 = fopen("File_One.txt","w");
	fprintf(fpr1, "My Name is Naqeebullah\n");
	fclose(fpr1);


	fpr2 = fopen("File_Two.txt","w");
	fprintf(fpr2, "My Roll No is 25p-0660\n");
	fclose(fpr2);	

	fpr3 = fopen("File_Three.txt","w");

	fpr1 = fopen("File_One.txt","r");
	fpr2 = fopen("File_Two.txt","r");
	
	while ((text = fgetc(fpr1)) != EOF)
    fputc(text, fpr3);
    
    while ((text = fgetc(fpr2)) != EOF)
	fputc(text, fpr3);
	
	fclose(fpr1);
	fclose(fpr2);
	fclose(fpr3);
return 0;	
}