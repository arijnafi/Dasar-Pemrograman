 #include <stdio.h>

void tukar (int a, int b, int c, int d, int f, int g, int h, int i);
int main (){
int a, b, c, d, e, f, g, h, i, j, k, l;
scanf ("%d %d %d\n%d %d %d\n%d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
j=b;
b=d;
d=j;
k=c;
c=g;
g=k;
l=f;
f=h;
h=l;
printf ("%d %d %d\n%d %d %d\n%d %d %d\n", a, b, c, d, e, f, g, h, i);

return 0;
}
