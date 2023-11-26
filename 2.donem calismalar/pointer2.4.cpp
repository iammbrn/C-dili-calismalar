#include <iostream>
#include <stdlib.h>


int main(int argc,int *argv[]) {
    
    int a,b,c;
    float ort;
    
    printf("Parametre sayisi=%d\n",argc-1);
    
    if(argc!=4)
    {
        
        puts("Uc deger girilmelidir.");
        exit(1);
        
    }
	
    a=atoi(argv[1]);
    b=atoi(agrv[2]);
    c=atoi(argv[3]);
    
    ort=float(a+b+c)/3;
    
    printf("Uc sayinin aritmetik ortlamasi=%.2f",ort);

}

