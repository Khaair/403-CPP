#include<bits/stdc++.h>
using namespace std;
int main()
{
 float xb[]={100,110,120,129,140,149,158,168,179,188,198,209,219,226,234,240};
 float yb[]={0,3,6,10,15,20,26,32,37,34,30,27,23,19,16,14};
 float dist,time_limit=12,xf[20],yf[20],s=20;
 int i;
 xf[0]=0;
 yf[0]=0;
 cout<<"Time\tDistance\n";
 for(i=0;i<=12;i++){
 dist=sqrt(pow(yf[i]-yb[i],2)+pow(xf[i]-xb[i],2));
 cout<<i<<"\t"<<dist<<endl;
 if(i>time_limit)
 printf("\nTarget escapes");
 if(dist<=10)
 break;
 else{
 xf[i+1]=xf[i]+s*(xb[i]-xf[i])/dist;
 yf[i+1]=xf[i]+s*(yb[i]-yf[i])/dist;
 }
 }
 cout<<"\nPersuitends shot at "<<i<<" minutes and at "<<dist<<" kms\n";
 return 0;
}
