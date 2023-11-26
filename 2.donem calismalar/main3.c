#include <stdio.h>
#include <stdlib.h>

main()
{
	int i,bir,on,yuz,x=0;
	
	for(i=100;i<=999;i++)
	{
		yuz=i/100;
		on=(i%100)/10;
		bir=i%10;
		if(bir!=on && on!=yuz && bir!=yuz)
		{
		  printf(" %d ",i);
		  x++;
	    }

   }
   printf("%d tane sayi vardir.\n",x);


}
