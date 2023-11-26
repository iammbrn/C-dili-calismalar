#include <stdio.h>
#include <stdlib.h>

int bitsifirla(int x,int st,int ed)
{
	int k;
	for(k=st;k<=ed;++k)
	{
		x&=~(1<<k);
	
	}
		return x;
}

int bitbirle(int x,int st,int ed)
{
	int k;
	for(k=st;k<=ed;++k)
	{
		x|=1<<k;
		
	}
		return x;	
}
	


	
	
	
	
	
	
	
	
	

