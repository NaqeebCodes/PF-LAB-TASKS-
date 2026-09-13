#include<stdio.h>
#include<math.h>
int main()
{
	printf("Name: Naqeebullah\n Roll No: 25p-0660\n Section: BCS-1b\n");
	float a, b, c, x1, x2, d;
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	printf("Enter c: ");
	scanf("%f", &c);
	d= (b*b)-(4*a*c);
	if (d >= 0) {
	x1= (-b+d)/(2*a);
	x2= (-b-d)/(2*a);
	 printf("X1 = %.2f\n", x1);
     printf("X2 = %.2f\n", x2);
	} else {
        printf("Imaginary roots (d < 0)\n");
    }
	return 0;
}

