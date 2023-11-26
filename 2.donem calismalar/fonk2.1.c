#include <stdio.h>
#include <stdlib.h>

char harf(int not)
{
	if(not>=0 && not<50)return'F';
	if(not>=50 && not<70)return'D';
	if(not>=70 && not<80)return'C';
	if(not>=80 && not<90)return'B';
	if(not>=90)return'A';
}

main()
{
	int not;
	
	printf("Notu giriniz:");
	scanf("%d",not);
	
	printf("Notun harf olarak degeri=%c\n",harf(not));
}
