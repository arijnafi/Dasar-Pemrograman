#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	while (x%2==0)
	{
		x=x/2;
	}
	if(x==1) printf("ya\n");
	else printf("bukan\n");
}
