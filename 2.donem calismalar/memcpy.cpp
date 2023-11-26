#include <iostream>
#include <string.h>
#define size 100


int main()
{
 
     char str[size]="Ask guzeldir,sevmesini bilirsen,sevmek guzeldir,guvenmesini bilirsen";
     char s2[size];
     
     memcpy(s2,str,size);
     
     puts(str);
     puts(s2);
     
     
     char s1[20];
     char s3[]="Batman Universitesi";
     
     memcpy(s1,s3,20);
     puts(s1);
     
     
     char s4[]="ABCDEFG";
     char s5[]="ABCDXYZ";
     
     memcpy(s4,s5,20);
     puts(s4);
     
     memcpy(s5,s4,20);
     puts(s5);
     
     int u[5]={1,2,3,4,5},v[5];
     
     memcpy(v,u,5*sizeof(int));
     for(int i=0;i<5;++i)
     {
     	printf("v[%d]=%d\n",i,v[i]);
	 }
     
      memcpy(v,u,32);
     for(int i=0;i<5;++i)
     {
     	printf("v[%d]=%d\n",i,v[i]);
     	
	 }

     
     
     
}
