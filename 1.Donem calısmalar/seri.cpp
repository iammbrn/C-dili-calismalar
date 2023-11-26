#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x,us,i,toplam=0,seri;
	
	printf("Seri degeri olan x degeri giriniz = ");
	scanf("%d",&x);
	printf("Serinin us degerini giriniz = ");
	scanf("%d",&us);
	
	for(i=0;i<=5;i++)
	{
		seri=pow(x,i);
		printf("%d. adim %d^%d=%d\n",i,x,i,seri);
		toplam+=seri;
	}
	
	printf("Seri toplami = %d",toplam);
	
	
	return 0;
}
