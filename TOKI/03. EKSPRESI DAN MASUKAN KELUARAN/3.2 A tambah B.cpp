#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d", &a,&b);
	if(a>=1 && a<=100)
	{
		c=a+b;
		printf("%d\n", c);
	}
	return 0;
}
