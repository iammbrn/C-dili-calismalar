#include <iostream>
#include <stdlib.h>

int main(int argc,char*argv[])
{
    int toplam=0;
    float ort;
    
    if(argc<2)
    {
        puts("En az bir deger girilmelidir.");
        exit(1);
    }
    
    for(int i=1;i<argc;i++)
    {
        toplam=atoi(argv[i]);
    }
    
    ort=toplam/(argc-1);
    
    printf("%d sayinin aritmetik ortalamasi=%.2f",(argc-1),ort);
}
