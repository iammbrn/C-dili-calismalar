#include <iostream>
#include <string.h>



int main()
{
    /* char str[100]="Ask guzeldir,sevmesini bilirsen,sevmek guzeldir,guvenmesini bilirsen";
	
	char *ps=memchr(str,'g',strlen(str)+1);
	
	if(ps)
	{
		printf("Aranan karakter buludu %d.",ps-str);
	}
	else 
	{
		printf("Aranan karakter bulunamadi."); 
	}
	*/
	const char *s="Bataman Universitesi Muhendislik";
	
	printf("%c\n",'M',"bulunduktan sonra","kalan karakterler",memchr(s,'M',33));
	return 0;
	
}
