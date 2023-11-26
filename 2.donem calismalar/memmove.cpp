#include <iostream>
#include <string.h>


int main()
{
    char x[]="Evim guzel evim";
    char y[]="who am i oscary";
    
    memmove(x+2,x,strlen(x)+1);	
	puts(x);
	
	memmove(y,&y[5],100);
	puts(y);
}
