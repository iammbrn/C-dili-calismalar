#include <stdio.h>
#include <stdlib.h>

main()
{
	int ch=0x0041;            // ch= 0000 0000 0100 0001
	int mask=0x0020;         //mask= 0000 0000 0010 0000
	
	ch|=mask;                 // ch= 0000 0000 0110 0001
	printf("ch=%x\n",ch);    //ch=97 yazdir ch= 0x0061
	
	mask=~0x0020; //mask=-32 //mask= 1111 1111 1101 1111 
	ch=ch&mask;                //ch= 0000 0000 0100 0001
	printf("ch=%d\n",ch);//ch=65 ch= 0000 0000 0100 0001  0x0041
	
	int x=0x0001; // x=1      x= 0000 0000 0000 0001  
	int k=6;                 //  0000 0000 0100 0000            
	
	if(x & 1 << k)           //  0000 0000 0000 0000
	{
		printf("%d. Bit 1 dir.\n",k);
		
	}
	else
	{
		printf("%d. Bit 0 dir.\n",k);	
	}
	
	x^=1<<k;            //     x= 0000 0000 0000 0001
	if(x & 1 << k)                           
	{
		printf("%d. Bit 1 dir.\n",k);	
	}
	else
	{
		printf("%d. Bit 0 dir.\n",k);	
	}	
	
	
	
}	
	
	
	
	
	
	
	
	
	

