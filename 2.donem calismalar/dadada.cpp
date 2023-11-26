#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a,b,c;
	float ort;
	
	printf("Parametre sayisi=%d\n",argc);
	printf("argv[0]=%s\n",argv[0]);
	
	if(argc<4)
	{
		puts("\nEksik parametre girdiniz!!!");
		return 0;
	}
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	
	ort=(float)(a+b+c)/(argc-1);
	printf("Ortalama=%.2f",ort);

}
