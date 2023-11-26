#include <stdio.h>
#include <stdlib.h>

/*fonksiyonlar sadece ana programda cagrilmazlar,bir fonksiyon baska bir fonksiyon tarafindan da cagrilabilir!!!*/



int yilin_gunu(int,int,int);
int artik_yil(int);

int main(void)
{
	int gun=1,ay=8,yil=2017;
	
	printf("%02d %02d %d yilinin\n",gun,ay,yil);
	printf("%d.gunudur\n",yilin_gunu(gun,ay,yil));
}


int artik_yil(int yil)
{
	if(yil%4==0 && yil%100!=0 || yil%400==0)
	return 1;
	
	else 
	return 0;
}
