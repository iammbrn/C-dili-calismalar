#include <iostream>
#include <math.h>

float yukseklik(int a,int c)
{
    
    float h;
    
    h=sqrt(a*c);
    
    return h;
}
float alan(int a,int c)
{
    float h,alan;
    
    h=sqrt(a*c);
    alan=h*(a+c)/2;
    return alan;
}

int main()
{
     
     int a,c;
     float (*p)(int,int);

     printf("a=");
     scanf("%d",&a);
     printf("c=");
     scanf("%d",&c);    
    
     printf("%.2f\n",yukseklik(a,c));
     printf("%.2f\n",alan(a,c));
     
     p=alan;
     printf("%.2f\n",p(a,c));
     
     p=yukseklik;
     printf("%.2f\n",p(a,c));
}

