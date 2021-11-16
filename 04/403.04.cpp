#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n,i=1;
float r,x,y,x3,h,w,area,I,m,u;
int main()
{
    printf("Enter the number of observation: ");
    scanf("%d",&n);
    printf("Enter the height: ");
    scanf("%f",&h);
    printf("Enter the weight: ");
    scanf("%f",&w);
    area=h*w;
    printf("\nArea= %.3f\n",area);
    do
    {
        r=rand()/32768.0;
        r*=50;
        if(r>20&&r<50)
        {
            x=0.1*r;
            y=rand()*140/32768.0;
            x3=x*x*x;
            if(y<=x3)
                m++;
            i++;
        }
    }
    while(i!=n);
    u=n;
    I=(m/u)*area;
    printf("\nThe Integration is= %.2f\n\n",I);
    return 0;
}

