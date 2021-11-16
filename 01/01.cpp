#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
 float r1,r2,m=0;
 int i,n=1000;
 for(i=1;i<=n;i++){
 r1=rand()/32768.0;
 r2=rand()/32768.0
 if(r2<=sqrt(1-r1*r1))
 m++;
 }
 cout<<"The value of pi= "<<(m*4)/n<<endl;
 return 0;
}

