#include <stdio.h>
#include <math.h>

// 3 Basamakl� Armstrong Say�lar

int main()
{
	int i,bir,on,yuz,arm;
	
	for(i=100;i<=999;i++)
	{
		yuz=i/100;
		on=(i-(yuz*100))/10;
		bir=i%10;
		arm=(pow(yuz,3)+pow(on,3)+pow(bir,3));
		if(i==arm)
		{
			printf("%d\n",i);
		}
	}
}
