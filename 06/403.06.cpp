#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 long seed=6785,a,b,c,i,j,k,x,y,z;
 for(i=1;i<=30;i++){
 y=seed*seed/100.0;
 z=y/10000.0;
 x=(((y/10000.0)-z)*10000);
 seed=x;
 printf("%4ld ",x);
 }
 return 0;
}
