#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	if(a<=9)
	{
		printf("satuan\n");
	}
	else if (a<=99)
	{
		printf("puluhan\n");
	}
	else if (a<=999)
	{
		printf("ratusan\n");
	}
	else if (a<=9999)
	{
		printf("ribuan\n");
	}
	else 
	{
		printf("puluhribuan\n");
	}
	return 0;
	
}
