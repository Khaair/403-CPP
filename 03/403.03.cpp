#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,xmin,xmax,ymin,ymax,n;
 float area,mf,r1,r2,m,a,x,y;
 cout<<"Enter the value of xmin: ";
 cin>>xmin;
 cout<<"Enter the value of xmax: ";
 cin>>xmax;
 cout<<"Enter the value of ymin: ";
 cin>>ymin;
 cout<<"Enter the value of ymax: ";
 cin>>ymax;
 cout<<"\nEnter the number of random number you want to generate: ";
 cin>>n;
 if(xmin<=0)
 xmax=xmax-xmin;
 if(ymin<=0)
 ymax=ymax-ymin;
 if(ymax>xmin)
 mf=ymax+10;
 else
 mf=xmax+10;
 for(i=1;i<=n;i++){
 x=rand()/32768.0;
 y=rand()/32768.0;
 x*=mf;
 y*=mf;
 if(x>=xmin&&x<=xmax&&y>=ymin&&y<=ymax)
 m++;
 }
 mf*=mf;
 area=m/float(n);
 area*=mf;
 cout<<"\nArea= "<<area<<endl;
 return 0;
}

