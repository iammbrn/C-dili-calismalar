#include <iostream>
#include <string.h>
#define SÝZE 100

int main()
{
	char bilgi[SÝZE];
	

	printf("Mesaj:");
	gets(bilgi);
	puts(bilgi);
	
	printf("%10s\n",bilgi);
	
	printf("%20.5s",bilgi);
	
	
}
