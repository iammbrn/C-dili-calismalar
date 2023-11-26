#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int x=0x1AC3; // x= 0001 1010 1100 0011
	int y,z;
	
	y=~x; // 1110 0101 0011 1100
	printf("y=%X\n",y); // y=0xE53C
	
	y=2;
	x=52; //  x= 0000 0000 0011 0100
	z=x<<y; // x'i  y  kadar sola kaydir ve z'ye ata  z= 0000 1101 0000
	printf("z=%d\n",z); // z=208 yazdir 
		
	y=2; x=52;  // x= 0000 0011 0100
	z=x>>y;    // x'i  y  kadar saga kaydir ve z'ye ata  z= 0000 0000 1101
	printf("z=%d\n",z); // z=13 yazdir	
	
	int a=0x1BC5;   // a= 0001 1011 1100 0101
	int b=0x3A0D;  //  b= 0011 1010 0000 1101
	int c;
	
	c=a&b;        //   c= 0001 1010 0000 0101
	printf("c=%X\n",c); // c=0x1A05 yazdir
	
	c=a|b;   //        c= 0011 1011 1100 1101
	printf("c=%X\n",c); // c=0x3BCD
	
	c=a^b;  //         c= 0010 0001 1100 1000
	printf("c=%X\n",c); // c=0x21C8
	
	a=10; b=20;  // a= 0000 0000 0000 1010   b= 0000 0000 0001 0100
    a^=b;
    printf("a=%d b=%d\n",a,b);
	a^=b^=a;
	printf("a=%d b=%d\n",a,b);   
	a^=b^=a^=b;
    printf("a=%d b=%d",a,b);
}
