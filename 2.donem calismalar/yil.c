#include <stdio.h>
#include <stdlib.h>

// 2000 yýlý itibari ile ülke nufusu 60 milyondur. yýllýk nufus artýþ oraný %2.3'tur sonraki 10 yýlda ülke nufusunu yýllara göre listeleyen program

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
