#include <stdio.h>

int main()
{ 

 int a,b,c,d,e,f,x;

#pragma scop
  a=b+c;
  c=d+e;
  g=e+f;
  x= e+f;
#pragma endscop
