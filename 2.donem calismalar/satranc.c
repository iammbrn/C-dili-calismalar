#include <stdio.h>
#include <stdlib.h>

/*bir satran� tahtas�n�n 1.g�z�ne 1 bu�day 2. G�z�ne 2 bu�day yani her g�ze �ncekinin 2 kat� bu�day konulacakt�r 64 g�z oldu�una 
g�re her bir g�zde olmas� gereken bu�day tanesinini ve gerekli toplam bugday tanesini listelyen program */

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
