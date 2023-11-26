#include <stdio.h>
float toplaBol(int x,int y,int z)
{
	float sonuc;
	sonuc=(float)(x+y)/z;
	return sonuc;
}

main(){
int dizi[3]; int i;
for (i=0; i<=2 ; i++)
{
	printf("%d. sayiyi gir = ",(i+1));
	scanf("%d",&dizi[i]);
}
printf("sonuc = %f",toplaBol(dizi[0],dizi[1],dizi[2]));
}
