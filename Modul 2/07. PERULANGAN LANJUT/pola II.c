#include<stdio.h>
int main()
{
	int N, i, j, k;
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			k=i+j;
			if(k<N-1) printf(" ");
			if(k>=N-1) printf("*");
		}
		printf("\n");
}

}
