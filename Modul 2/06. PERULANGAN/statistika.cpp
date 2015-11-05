#include<stdio.h>
int main()
{
	int N, a=1,x, c=-100000, d=100000;
	scanf("%d", &N);
	while(a<=N)
	{
		scanf("%d", &x);
		a++;
		if(c<x)
		c=x;
		
		if(d>x)
		d=x;  
		
	}
	
	printf("%d %d\n", c, d);
	
	return 0;
}
