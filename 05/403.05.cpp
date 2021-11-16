#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i;
 float r1,r2,m=0,p,ra;
 cout<<"How many numbers you want to generate: ";
 cin>>n;
 for(i=1;i<=n;i++){
 r1=rand()/32768.0;
 r2=rand()/32768.0;
 ra=sqrt(1- pow(r1,2));
 if(r2<=ra)
 m++;
 }
 p=(m/float(n)*4);
 cout<<"\nPi= "<<p<<endl;
 return 0;
}

