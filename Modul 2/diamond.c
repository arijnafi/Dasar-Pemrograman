#include<stdio.h>
int main ()
{
	int N, a, b, c=0;
	scanf("%d", &N);
	
	for(a=1; a<=N; a++)
	{
		for(b=1; b<=N-a; b++)
		printf(" ");
		
		while(c!=2*a-1)
		{
			printf("*");
			c++;
		}
		c=0;
		printf("\n");
	}
	for(a=N-1; a>=1; a--)
	{
		for(b=1; b<=N-a; b++)
		printf(" ");
		
		while(c!=2*a-1)
		{
			printf("*");
			c++;
		}
		c=0;
		printf("\n");
	}
return 0; 
}
