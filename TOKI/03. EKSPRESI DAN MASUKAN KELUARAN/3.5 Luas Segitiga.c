#include<stdio.h>

int main()
{
	float a,t,luas;
	scanf("%f %f", &a, &t);
	if((a>=1 && a<=1000)&&(t>=1 && t<=1000))
	{
	luas=(a*t)/2;
	printf("%.2f\n", luas);
}
return 0;
}
