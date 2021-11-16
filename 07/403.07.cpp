#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,k,s,x,n;
 float p,r;
 printf("Enter the value of p(<1.0): ");
 scanf("%f",&p);
 printf("Enter the value of k(>=1.0): ");
 scanf("%d",&k);
 printf("Enter the number of variates to be generated: ");
 scanf("%d",&n);
 printf("\n\nValues of variates: ");
 for(i=1;i<=n;i++){
 x=0;
 s=0;
 while(s<k){
 r=rand()/32768.0;
 if(r<=p)
 s++;
 x++;
 }
 printf("%d ",x);
 }
 printf("\n");
 return 0;
}
