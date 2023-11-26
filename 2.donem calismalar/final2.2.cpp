#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc,char *argv[])
{
	
char *metin;
int a,b;


if(argc<4)
{
printf("eksik veya fazla parametre girdiniz!!!");
return 0;
}


metin=argv[1];
a=atoi(argv[2]);
b=atoi(argv[3]);
for(int i=a;i<=b;i++)
{
printf("%c",metin[i]);
}
}


