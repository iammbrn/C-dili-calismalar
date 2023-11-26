#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char* metin;
	
	for(int i=1;i<argc;i++)
	{
		
		printf("%s",argv[i]);
		
	}
	
	
	printf("\n %d bosluk var",argc-2);
	
	
	
	return 0;
}
