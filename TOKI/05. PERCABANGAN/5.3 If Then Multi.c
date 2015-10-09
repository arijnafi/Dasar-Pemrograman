#include <stdio.h>

int main (){
 long int N, M;
 scanf("%ld", &N);
 M=N%2;
 if ((N>0 && N<=100000) && M==0){
  printf("%ld\n", N);
 }
 else {
  printf("");
 }
 
 return 0;
}
