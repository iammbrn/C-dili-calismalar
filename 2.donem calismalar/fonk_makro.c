#include <stdio.h>

#define buyuk(a,b)  ((a>b) ? a:b)
#define kare(x,y)   ((x)*(x)),((y)*(y))
#define bol(x,y)   (x/y) 
#define fark(x,y)   (x-y) 
#define toplam(x,y)   (x+y)
 
// MAKRO fonksiyon ornek

int main()
{
	
	int x,y,eb;
	
	printf("Iki sayi girin:");
	scanf("%d\n%d",&x,&y);
	
	eb=buyuk(x,y);
	
	printf("Buyuk olan = %d\n",eb);
	printf("Buyuk olan = %d\n",buyuk(x,y));
	printf("Sayilarin karesi = %d %d\n",kare(x,y));
	printf("Sayilarin bolumu = %d\n",bol(x,y));
	printf("Sayilarin farki = %d\n",fark(x,y));
	printf("Sayilarin toplami = %d\n",toplam(x,y));
	
	
}
