#include <stdio.h>
#include <stdlib.h>

// 2000 y�l� itibari ile �lke nufusu 60 milyondur. y�ll�k nufus art�� oran� %2.3'tur sonraki 10 y�lda �lke nufusunu y�llara g�re listeleyen program

main()
{
	int i;
	float sonuc=60000000;
	
	for(i=1;i<=10;i++)
	{
		sonuc=sonuc+(sonuc*(2.3/100));
		printf("%d. Yil Nufus=%.2f\n",i,sonuc);		
   }
}
