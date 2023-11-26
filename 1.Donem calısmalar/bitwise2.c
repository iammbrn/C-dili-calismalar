#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	   int x=0x0020;    //  x= 0000 0000 0010 0000
	   
						//     0000 0000 0100 0000
	
		x|=1>>8;	   //   x= 0000 0000 0110 0000					  
									  
	printf("x|=1<<k=%d\n",x);			  
	
	
	
	
	
	return 0;
}
