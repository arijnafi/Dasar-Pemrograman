#include<stdio.h>
int main()
{
	int N, i;
	scanf("%d", &N);
	for(i=1; i<=N; i++)
	{
		if(i%10==0) continue;
		if(i==42){
		 printf("ERROR\n"); break;}
		else printf("%d\n", i);
	}
}
