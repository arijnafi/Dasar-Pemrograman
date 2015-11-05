#include<stdio.h>
int main()
{
	long long int masukan, bilangan [1000], a, b, c;
	scanf("%lld", &masukan);
	b=0;
	for(a=1;a<=masukan;a++)
	{
		if(masukan%a==0)
		{
		bilangan[b]=masukan/a;
		b++;
		}
	} 
	c=0;
	while(c<b)
	{
		printf("%lld\n", bilangan[c]);
		c++;
	}
	return 0;
}
