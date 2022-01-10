#include<stdio.h>
int main()
{
	float a,b,c,d,e,agg,per;
	printf("Enter the marks obtained in each of the subjects: ");
	scanf("%f %f %f %f %f",&a, &b, &c, &d, &e);
	if(a<=100&&b<=100&&c<=100&&d<=100&&e<=100)
	{
		agg=a+b+c+d+e;
		per=agg/5;
	    printf("The aggregate marks obtained is: %f",agg);
	    printf("The percentage marks obtained is: %f",per);
	}
	else
	printf("Given data is inappropriate.");
	return 0;
}
