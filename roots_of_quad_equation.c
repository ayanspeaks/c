#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2;
	printf("Give the coefficients of x^2 and x respectively with the constant: ");
	scanf("%f %f %f",&a,&b,&c);
	root1=(b+pow((b*b-4*a*c),0.5))/(2*a);
    root2=(-b-pow((b*b-4*a*c),0.5))/(2*a);
    printf("Root1 of the given quadratic equation is: %f",root1);
	printf("/nRoot2 of the given quadratic equation is: %f",root2);
	return 0;	
}
