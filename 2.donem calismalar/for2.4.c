#include <stdio.h>

main()
{
	for( ; ; )     //sayac,kosul ve artim degerleri kulanilmasi zorunlu degildir.
	{
		printf("Sonsuz dongu...\n");  
	}
	
	
	int x=1;
	for(;x<=100;x+=2)       //Sayacin baslangic degeri dongunun disinda verilebilir.
	{
		printf("%d\n",x);
	}
	
	
	int x=1;
	for(;x<=100;)          //Artim miktarinin dongu icinde verilmesi zorunlu degildir.
	{
		printf("%d\n",x+=2);
	}
	
	
	for(x=50,y=3;x%y!=0;x--,y--)        //Dongu icinde birden cok dongu sayaci kullanilabilir.
	{
		print("%d %% %d =%d\n",x,y,x%y);
	}
	
	
	for(x=50,y=3;x>=1 || y<=50;x--,y++)  //Dongu icinde birden cok kosul kullanilabilir.
	{
		printf("%d %% %d = %d\n",x,y,x%y);
	}
}   
