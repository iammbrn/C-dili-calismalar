#include <stdio.h>
#include <stdlib.h>

/*bir satranç tahtasýnýn 1.gözüne 1 buðday 2. Gözüne 2 buðday yani her göze öncekinin 2 katý buðday konulacaktýr 64 göz olduðuna 
göre her bir gözde olmasý gereken buðday tanesinini ve gerekli toplam bugday tanesini listelyen program */

main()
{
	int i;
	double bugday=1,toplam;
	
	for(i=1;i<=64;i++)
	{
		printf("%d. Gozde %.2f Tane Bugday Vardir.\n",i,bugday);
		toplam+=bugday;
		bugday=2*bugday;
		
	}
	printf("Toplam Bugday=%.2f\n",toplam);
	
	
	
}
