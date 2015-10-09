#include<stdio.h>
int main ()
{
	long int N, M, A, B;
	scanf ("%ld %ld", &N, &M);
	if ((N>=1 && N<=100000) && (M>=1 && N<=100000))
	{
	A=N/M;
	B=N%M;
	printf ("masing-masing %ld\nbersisa %ld\n", A, B);
	}
return 0;
}
