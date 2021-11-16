#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,s,n;
 float meu,sigma,sum,x,t;
 printf("Enter the value of Meu: ");
 scanf("%f",&meu);
 printf("Enter the value of sigma: ");
 scanf("%f",&sigma);
 printf("Enter the number of variates to be generated: ");
 scanf("%d",&n);
 printf("\n\nValues of variates: ");
 for(i=1;i<=n;i++){
 sum=0;
 for(j=0;j<=12;j++){
 x=rand()/32768.0;
 sum+=x;
 }
 t=meu+sigma*(sum-6);
 printf("%.2f ",t);
 }
 printf("\n");
return 0;
}
