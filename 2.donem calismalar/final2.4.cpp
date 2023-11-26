#include <stdio.h> 
#include <string.h> 
int main(){
char *s2="Batman Universitesi Muhendislik";

printf("%c\%s\%s\n\"%s\"\n",'s'," bulunduktan sonra ","kalan karakterler",memchr(s2,'s',33));
return 0;
}

