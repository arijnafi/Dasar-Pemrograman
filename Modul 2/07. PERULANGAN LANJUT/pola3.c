#include<stdio.h>

int main()
{
	int a,b,c,d=0;
	scanf("%d", &a);
	
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c++)
		{
		printf("%d", d);
		d=d+1;
		if(d==10)
		d=0; 
		}
		printf("\n");
	}

	return 0;
}
